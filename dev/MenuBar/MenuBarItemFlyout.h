﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "MenuBarItemFlyout.g.h"

class MenuBarItemFlyout : 
    public ReferenceTracker<MenuBarItemFlyout, winrt::implementation::MenuBarItemFlyoutT>
{
public:
    MenuBarItemFlyout() {}
    virtual ~MenuBarItemFlyout() {}

    // Property changed event handler.
    static void OnPropertyChanged(
        _In_ winrt::DependencyObject const& sender,
        _In_ winrt::DependencyPropertyChangedEventArgs const& args) {}

    winrt::Control CreatePresenter();

    tracker_ref<winrt::Control> m_presenter{ this };
};

CppWinRTActivatableClassWithBasicFactory(MenuBarItemFlyout);