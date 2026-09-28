#pragma once 

#include <JuceHeader.h>

class MainComponent : public juce::AudioAppComponent
{
public:
    MainComponent();
    ~MainComponent() override;

    void prepareToPlay (int samplesPerBlockExpected,
                        double sampleRate) override;

    void getNextAudioBlock (
        const juce::AudioSourceChannelInfo& bufferToFill) override;

    void releaseResources() override;

    void paint (juce::Graphics& g) override;
    void resized() override;

private:
    void loadLoop();

    juce::Label titleLabel;
    juce::Label subtitleLabel;
    juce::Label statusLabel;

    juce::TextButton loadButton { "LOAD LOOP" };
    juce::TextButton playButton { "PLAY" };
    juce::TextButton stopButton { "STOP" };

    juce::AudioFormatManager formatManager;
    std::unique_ptr<juce::AudioFormatReaderSource> readerSource;
    juce::AudioTransportSource transportSource;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
