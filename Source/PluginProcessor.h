/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/**
*/
class SoftwareSummativeAudioProcessor  : public AudioProcessor/*, public AudioProcessorValueTreeState::Listener*/

{
public:
    //==============================================================================
    SoftwareSummativeAudioProcessor();
    ~SoftwareSummativeAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioBuffer<float>& buffer, MidiBuffer&) override;
 

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;

 
    void setStateInformation (const void* data, int sizeInBytes) override;

    AudioProcessorValueTreeState& getValueTreeState();
    
    //static String paramCutoff;
    //static String paramResonance;
    
    void updateFilter();
    
    void updateParameters();
    
    //void updateDistParameters();
    
    SmoothedValue<float>mixLevel;
    //SmoothedValue<float>freqLevel;
    //SmoothedValue<float>resLevel;
    
    //AudioProcessorValueTreeState treeState;
    AudioProcessorValueTreeState mState;

private:
    
    float currentSampleRate;
    //float lastSampleRate;
    
    
    
    //Atomic<float> cutoff { 600.0 };
   // Atomic<float> resonance { 1.0 };
    
    AudioParameterFloat* cutoff;
    AudioParameterFloat* resonance;
    
    AudioParameterFloat* drive;
    AudioParameterFloat* range;
    AudioParameterFloat* blend;
    AudioParameterFloat* volume;
    
    float*driveParameter = nullptr;
    float*rangeParameter = nullptr;
    float*blendParameter = nullptr;
    float*volumeParameter = nullptr;
    
    float*cutoffParameter = nullptr;
    float*resParameter = nullptr;
    
    UndoManager mUndoManager;
    
    
    Random random;
    
    dsp::ProcessorDuplicator<dsp::IIR::Filter <float>, dsp::IIR::Coefficients<float>> lowPassFilter;
    
    //dsp::ProcessorDuplicator<dsp::
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SoftwareSummativeAudioProcessor)
};
