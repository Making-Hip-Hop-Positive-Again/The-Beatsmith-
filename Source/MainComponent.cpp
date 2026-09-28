##include "MainComponent.h"

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
    subtitleLabel.setFont (juce::Font (22.0f));

    addAndMakeVisible (companyLabel);
    companyLabel.setText ("by Plugged Professor Productions LLC",
                          juce::dontSendNotification);
    companyLabel.setJustificationType (juce::Justification::centred);
    companyLabel.setFont (juce::Font (16.0f));
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colour (0xff111111));

    g.setColour (juce::Colours::white);
    g.drawRect (getLocalBounds(), 2);
}

void MainComponent::resized()
{
    auto area = getLocalBounds().reduced (20);

    titleLabel.setBounds (area.removeFromTop (70));
    subtitleLabel.setBounds (area.removeFromTop (50));
    companyLabel.setBounds (area.removeFromTop (40));
}include "MainComponent.h"

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
