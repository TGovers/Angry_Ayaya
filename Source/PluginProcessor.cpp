/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//String SoftwareSummativeAudioProcessor::paramCutoff ("cutoff");
//String SoftwareSummativeAudioProcessor::paramResonance ("resonance");

//==============================================================================
SoftwareSummativeAudioProcessor::SoftwareSummativeAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       ), mState(*this, &mUndoManager, "Summative", {
         
         std::make_unique<AudioParameterFloat>("cutoff", "Cutoff", 20.0f, 20000.0f, 600.0f),
         std::make_unique<AudioParameterFloat>("resonance", "Resonance", 1.0f, 5.0f, 1.0f),
         std::make_unique<AudioParameterFloat>("drive", "Drive", NormalisableRange<float>(0.0f, 1.0f, 0.0001), 0.01f),
         std::make_unique<AudioParameterFloat>("range", "Range", NormalisableRange<float>(0.0f, 3000.0f, 0.0001), 0.01f),
         std::make_unique<AudioParameterFloat>("blend", "Blend", NormalisableRange<float>(0.1f, 1.0f, 0.0001), 0.1f),
         std::make_unique<AudioParameterFloat>("volume", "Volume", NormalisableRange<float>(0.0f, 3.0f, 0.0001), 0.01f),
         
         
     }), lowPassFilter(dsp::IIR::Coefficients<float>::makeLowPass(44100, 20000.0f, 0.1f))
                                                                                 
                                                                                                                                                                                        
#endif
{
    
    
    //mState.addParameterListener(resonance, this);
    
    
    /*addParameter (cutoff = new AudioParameterFloat ("cutoff",
                                                    "Cutoff",
                                                    20.0f,
                                                    20000.0f,
                                                    600.0f));
    
    addParameter (resonance = new AudioParameterFloat ("resonance",
                                                       "Resonance",
                                                       1.0f,
                                                       5.0f,
                                                       1.0f));*/
    //treeState = new AudioProcessorValueTreeState(*this, nullptr);
    //treeState.createAndAddParameter("cutoff", "Cutoff", "cutoff", cutoffRange, 600.0f, nullptr, nullptr);
    
    
    //cutoffParameter = treeState.getRawParameterValue("cutoff");
    //resParameter = treeState.getRawParameterValue("resonance");
    
    //NormalisableRange<float> cutoffRange (20.0f, 20000.0f);
    //NormalisableRange<float> resRange (1.0f, 5.0f);
    
    /*addParameter (cutoff = new AudioParameterFloat ("cutoff", "Cutoff", NormalisableRange<float> (20.0f, 20000.0f), 600.0f, nullptr, nullptr));
    addParameter (resonance = new AudioParameterFloat ("resonance", "Resonance", NormalisableRange<float> (1.0f, 5.0f), 1.0f, nullptr, nullptr));*/
    
    // IMPLEMENT THIS
    //treeState::addParameter("cutoff", "Cutoff", "cutoff", cutoffRange, 600.0f/*, nullptr, nullptr*/);
    //treeState.createAndAddParameter("resonance", "Resonance", "resonance", resRange, 1.0f/*, nullptr, nullptr*/);
    
    //using Parameter = AudioProcessorValueTreeState::Parameter;
    //createAndAddParameter (std::make_unique<Parameter> ("cutoff", "Cutoff", "cutoff", cutoffRange, 600.0f, nullptr, nullptr));
    
    //using Parameter2 = AudioProcessorValueTreeState::Parameter2;
    //createAndAddParameter (std::make_unique<Parameter2> ("resonance", "Resonance", "resonance", resRange, 1.0f, nullptr, nullptr));
}

SoftwareSummativeAudioProcessor::~SoftwareSummativeAudioProcessor()
{
}

//==============================================================================
const String SoftwareSummativeAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool SoftwareSummativeAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool SoftwareSummativeAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool SoftwareSummativeAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double SoftwareSummativeAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int SoftwareSummativeAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int SoftwareSummativeAudioProcessor::getCurrentProgram()
{
    return 0;
}

void SoftwareSummativeAudioProcessor::setCurrentProgram (int index)
{
}

const String SoftwareSummativeAudioProcessor::getProgramName (int index)
{
    return {};
}

void SoftwareSummativeAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void SoftwareSummativeAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
    
    currentSampleRate = sampleRate;
    //lastSampleRate = sampleRate;
    
    dsp::ProcessSpec spec;
    spec.sampleRate = sampleRate;
    spec.maximumBlockSize = samplesPerBlock;
    spec.numChannels = getTotalNumInputChannels();
    
    lowPassFilter.prepare(spec);
    lowPassFilter.reset();
    
    
    //overdrive.prepare(spec);
    //overdrive.reset();
    
    
    // initiate mixLevel
    //mixLevel.reset(sampleRate, 0.1f);
    //mixLevel.setTargetValue(0.25f);
    
    
}

void SoftwareSummativeAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool SoftwareSummativeAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void SoftwareSummativeAudioProcessor::updateFilter()
{
    float freq = *mState.getRawParameterValue("cutoff");
    float res = *mState.getRawParameterValue("resonance");
    
    *lowPassFilter.state = *dsp::IIR::Coefficients<float>::makeLowPass(currentSampleRate, freq, res);
}

/*void SoftwareSummativeAudioProcessor::updateDistParameters()
{
        if (sampleRate != 0.0)
        {
            overdrive.get<0>().setGainDecibels (static_cast<float> (inGainParam.getCurrentValue()));
            overdrive.get<4>().setGainDecibels (static_cast<float> (outGainParam.getCurrentValue()));
        }
}*/

void SoftwareSummativeAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
    ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // This is here to avoid people getting screaming feedback
    // when they first compile a plugin, but obviously you don't need to keep
    // this code if your algorithm always overwrites all the output channels.
    
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear (i, 0, buffer.getNumSamples());

    // This is the place where you'd normally do the guts of your plugin's
    // audio processing...
    // Make sure to reset the state if your inner loop is processing
    // the samples and the outer loop is handling the channels.
    // Alternatively, you can process the samples with the channels
    // interleaved by keeping the same state.
    
    //buffer.applyCutoff (*cutoff);
    //buffer.applyResonance (*resonance);
    
    dsp::AudioBlock<float> block (buffer);
    
    updateFilter();
    lowPassFilter.process(dsp::ProcessContextReplacing <float> (block));
    
    //updateDistParameters();
    //overdrive.process(dsp::ProcessContextReplacing <float> (block));
    
    float mDrive = *mState.getRawParameterValue("drive");
    float mRange = *mState.getRawParameterValue("range");
    float mBlend = *mState.getRawParameterValue("blend");
    float mVolume = *mState.getRawParameterValue("volume");
    
    AudioBuffer<float> wetBuffer(getTotalNumInputChannels(), buffer.getNumSamples());
    wetBuffer.makeCopyOf(buffer);
    
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        //auto* channelData = buffer.getWritePointer (channel);
        //auto* wetData = wetBuffer.getWritePointer (channel);

        // ..do something to the data...
        
        auto* channelData = buffer.getWritePointer(channel);
        
        
        for(int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            //updateFilter();
            //lowPassFilter.process(dsp::ProcessContextReplacing <float> (block));
            
            float cleanSig = *channelData;
            
            *channelData *= mDrive * mRange;
            
            *channelData = (((((2.0f / float_Pi) * atan(*channelData)) * mBlend) + (cleanSig * (1.0f / mBlend))) / 2) * mVolume;
            
            
            channelData++;
            
            
        }   
    }
}

//==============================================================================
bool SoftwareSummativeAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* SoftwareSummativeAudioProcessor::createEditor()
{
    return new SoftwareSummativeAudioProcessorEditor (*this);
}

//==============================================================================
void SoftwareSummativeAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    
    MemoryOutputStream stream(destData, false);
    mState.state.writeToStream(stream);
    
}

void SoftwareSummativeAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
 
    
    ValueTree tree = ValueTree::readFromData(data, sizeInBytes);
    if (tree.isValid()) {
        mState.state = tree;
    }
    
    
    
    
        /*std::unique_ptr<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
        
        if (xmlState.get() != nullptr)
        {
            if (xmlState->hasTagName ("SoftwareSummative"))
            {
                *cutoff = (float) xmlState->getDoubleAttribute ("cutoff", 600.0);
                *resonance = xmlState->getDoubleAttribute ("resonance", 1.0f); // [5]
            }
        }*/
    
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new SoftwareSummativeAudioProcessor();
}
