﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.EventSystems;

namespace Microsoft.MixedReality.Toolkit.Teleport
{
    /// <summary>
    /// Describes a Teleportation Event.
    /// </summary>
    public class TeleportEventData : GenericBaseEventData
    {
        /// <summary>
        /// The pointer that raised the event.
        /// </summary>
        public IMixedRealityPointer Pointer { get; private set; }

        /// <summary>
        /// The teleport hot spot.
        /// </summary>
        public IMixedRealityTeleportHotspot Hotspot { get; private set; }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="eventSystem">Typically will be <see href="https://docs.unity3d.com/ScriptReference/EventSystems.EventSystem-current.html">EventSystem.current</see></param>
        public TeleportEventData(EventSystem eventSystem) : base(eventSystem) { }

        /// <summary>
        /// Used to initialize/reset the event and populate the data.
        /// </summary>
        public void Initialize(IMixedRealityPointer pointer, IMixedRealityTeleportHotspot target)
        {
            BaseInitialize(pointer.InputSourceParent);
            Pointer = pointer;
            Hotspot = target;
        }
    }
}
