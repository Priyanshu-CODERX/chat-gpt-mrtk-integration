using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;
using OpenAI;
using OpenAI.Models;

public class GPTManager : MonoBehaviour
{
    [SerializeField] Button promptEnter;
    [SerializeField] TMP_InputField inputField;
    [SerializeField] TMP_Text outputContent;

    private string userInput;
    private string chatHistory;
    private string aiIdentity = "act as an expert in Unity Engine, Computer Vision and Extended Reality";

    private OpenAIClient openAIClient;

    private void Start()
    {
        chatHistory += aiIdentity;
        openAIClient = new OpenAIClient(new OpenAIAuthentication("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"));

        promptEnter.onClick.AddListener(AskGPT);
    }

    private async void AskGPT()
    {
        promptEnter.enabled = false;
        inputField.enabled = false;

        userInput = inputField.text;
        chatHistory += $"{userInput}.\n";

        outputContent.text = ".....";
        inputField.text = "";

        var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(chatHistory, maxTokens: 200, model: Model.Davinci);

        outputContent.text = result.ToString();
        chatHistory += $"{userInput}\n";

        promptEnter.enabled = true;
        inputField.enabled = true;
    }
}
