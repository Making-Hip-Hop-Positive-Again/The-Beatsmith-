#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (800, 500);

    formatManager.registerBasicFormats();

    addAndMakeVisible (titleLabel);
    titleLabel.setText ("THE BEATSMITH", juce::dontSendNotification);
    titleLabel.setJustificationType (juce::Justification::centred);
    titleLabel.setFont (juce::Font (32.0f, juce::Font::bold));

    addAndMakeVisible (subtitleLabel);
    subtitleLabel.setText ("Loop DAW", juce::dontSendNotification);
    subtitleLabel.setJustificationType (juce::Justification::centred);
    subtitleLabel.setFont (juce::Font (18.0f));

    addAndMakeVisible (companyLabel);
    companyLabel.setText ("Plug
