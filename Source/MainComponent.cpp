#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{

    addAndMakeVisible(toggle);

    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (64.0f));
    g.setColour (juce::Colours::darkcyan);
    g.drawText ("Bababooey", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    toggle.setBounds(10, 10, 30, 30);
}
