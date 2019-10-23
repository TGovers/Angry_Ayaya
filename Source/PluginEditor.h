/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class AnimatedComponent : public Component, public Timer
{
public:
	void paint(Graphics& g) override;
	void rotateImage();
	Image A1 = ImageCache::getFromMemory(BinaryData::A1_png, BinaryData::A1_pngSize);
	Image A2 = ImageCache::getFromMemory(BinaryData::A2_png, BinaryData::A2_pngSize);
	Image A3 = ImageCache::getFromMemory(BinaryData::A3_png, BinaryData::A3_pngSize);
	Image A4 = ImageCache::getFromMemory(BinaryData::A4_png, BinaryData::A4_pngSize);
	Image A5 = ImageCache::getFromMemory(BinaryData::A5_png, BinaryData::A5_pngSize);
	Image A6 = ImageCache::getFromMemory(BinaryData::A6_png, BinaryData::A6_pngSize);
	Image A7 = ImageCache::getFromMemory(BinaryData::A7_png, BinaryData::A7_pngSize);
	Image A8 = ImageCache::getFromMemory(BinaryData::A8_png, BinaryData::A8_pngSize);
	Image A9 = ImageCache::getFromMemory(BinaryData::A9_png, BinaryData::A9_pngSize);
	Image A10 = ImageCache::getFromMemory(BinaryData::A10_png, BinaryData::A10_pngSize);
	Image A11 = ImageCache::getFromMemory(BinaryData::A11_png, BinaryData::A11_pngSize);
	Image A12 = ImageCache::getFromMemory(BinaryData::A12_png, BinaryData::A12_pngSize);
	Image A13 = ImageCache::getFromMemory(BinaryData::A13_png, BinaryData::A13_pngSize);
	Image A14 = ImageCache::getFromMemory(BinaryData::A14_png, BinaryData::A14_pngSize);
	Image A15 = ImageCache::getFromMemory(BinaryData::A15_png, BinaryData::A15_pngSize);
	Image A16 = ImageCache::getFromMemory(BinaryData::A16_png, BinaryData::A16_pngSize);
	Image A17 = ImageCache::getFromMemory(BinaryData::A17_png, BinaryData::A17_pngSize);
	Image A18 = ImageCache::getFromMemory(BinaryData::A18_png, BinaryData::A18_pngSize);
	Image A19 = ImageCache::getFromMemory(BinaryData::A19_png, BinaryData::A19_pngSize);
	Image A20 = ImageCache::getFromMemory(BinaryData::A20_png, BinaryData::A20_pngSize);
	Image A21 = ImageCache::getFromMemory(BinaryData::A21_png, BinaryData::A21_pngSize);
	Image A22 = ImageCache::getFromMemory(BinaryData::A22_png, BinaryData::A22_pngSize);
	Image A23 = ImageCache::getFromMemory(BinaryData::A23_png, BinaryData::A23_pngSize);
	Image A24 = ImageCache::getFromMemory(BinaryData::A24_png, BinaryData::A24_pngSize);
	Image A25 = ImageCache::getFromMemory(BinaryData::A25_png, BinaryData::A25_pngSize);
	Image A26 = ImageCache::getFromMemory(BinaryData::A26_png, BinaryData::A26_pngSize);
	Image A27 = ImageCache::getFromMemory(BinaryData::A27_png, BinaryData::A27_pngSize);
	Image A28 = ImageCache::getFromMemory(BinaryData::A28_png, BinaryData::A28_pngSize);
	Image A29 = ImageCache::getFromMemory(BinaryData::A29_png, BinaryData::A29_pngSize);
	Image A30 = ImageCache::getFromMemory(BinaryData::A30_png, BinaryData::A30_pngSize);
	Image A31 = ImageCache::getFromMemory(BinaryData::A31_png, BinaryData::A31_pngSize);
	Image A32 = ImageCache::getFromMemory(BinaryData::A32_png, BinaryData::A32_pngSize);
	Image A33 = ImageCache::getFromMemory(BinaryData::A33_png, BinaryData::A33_pngSize);
	Image A34 = ImageCache::getFromMemory(BinaryData::A34_png, BinaryData::A34_pngSize);
	Image A35 = ImageCache::getFromMemory(BinaryData::A35_png, BinaryData::A35_pngSize);
	Image A36 = ImageCache::getFromMemory(BinaryData::A36_png, BinaryData::A36_pngSize);
	Image A37 = ImageCache::getFromMemory(BinaryData::A37_png, BinaryData::A37_pngSize);
	Image A38 = ImageCache::getFromMemory(BinaryData::A38_png, BinaryData::A38_pngSize);
	Image A39 = ImageCache::getFromMemory(BinaryData::A39_png, BinaryData::A39_pngSize);
	Image A40 = ImageCache::getFromMemory(BinaryData::A40_png, BinaryData::A40_pngSize);
	Image A41 = ImageCache::getFromMemory(BinaryData::A41_png, BinaryData::A41_pngSize);
	Image A42 = ImageCache::getFromMemory(BinaryData::A42_png, BinaryData::A42_pngSize);
	Image A43 = ImageCache::getFromMemory(BinaryData::A43_png, BinaryData::A43_pngSize);
	Image A44 = ImageCache::getFromMemory(BinaryData::A44_png, BinaryData::A44_pngSize);
	Image A45 = ImageCache::getFromMemory(BinaryData::A45_png, BinaryData::A45_pngSize);
	Image A46 = ImageCache::getFromMemory(BinaryData::A46_png, BinaryData::A46_pngSize);
	Image A47 = ImageCache::getFromMemory(BinaryData::A47_png, BinaryData::A47_pngSize);
	Image A48 = ImageCache::getFromMemory(BinaryData::A48_png, BinaryData::A48_pngSize);
	Image A49 = ImageCache::getFromMemory(BinaryData::A49_png, BinaryData::A49_pngSize);

	Image images[49] = { A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12 ,A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, 
	A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49};
	int currentIndex;
	Image currentImage;

	int faceIndex;
	void pickFace(double distVal);
	Image F1 = ImageCache::getFromMemory(BinaryData::F1_png, BinaryData::F1_pngSize);
	Image F2 = ImageCache::getFromMemory(BinaryData::F2_png, BinaryData::F2_pngSize);
	Image F3 = ImageCache::getFromMemory(BinaryData::F3_png, BinaryData::F3_pngSize);
	Image F4 = ImageCache::getFromMemory(BinaryData::F4_png, BinaryData::F4_pngSize);
	Image F5 = ImageCache::getFromMemory(BinaryData::F5_png, BinaryData::F5_pngSize);
	Image F6 = ImageCache::getFromMemory(BinaryData::F6_png, BinaryData::F6_pngSize);
	Image F7 = ImageCache::getFromMemory(BinaryData::F7_png, BinaryData::F7_pngSize);
	Image faces[7] = { F1,F2,F3,F4,F5,F6,F7 };

	AnimatedComponent();

	void timerCallback() override;


};

class OtherLookAndFeel : public LookAndFeel_V4
{
public:
    
    void drawRotarySlider (Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider &slider) override
    {
        float diameter = jmin(width, height);
        float radius = diameter / 2;
        float centreX = x + width / 2;
        float centreY = y + height / 2;
        float rx = centreX - radius;
        float ry = centreY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        std::cout << rotaryStartAngle << " " << rotaryEndAngle << std::endl;
        
        Rectangle<float> dialArea (rx, ry, diameter, diameter);
        
        g.setColour(Colours::red);
        //g.drawRect(dialArea);
        g.fillEllipse(dialArea);
        
        g.setColour(Colours::black);
        //g.fillEllipse(centreX, centreY, 5, 5);
        
        Path dialTick;
        dialTick.addRectangle(-5.0f, -radius, 10.0f, radius * 0.33);
        
        g.fillPath(dialTick, AffineTransform::rotation(angle).translated(centreX, centreY));
        
        g.setColour(Colours::black);
        g.drawEllipse(rx, ry, diameter, diameter, 5.0f);
        
    }
    
};

class OtherLookAndFeel2 : public LookAndFeel_V4
{
public:
    
    void drawRotarySlider (Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider &slider) override
    {
        float diameter = jmin(width, height);
        float radius = diameter / 2;
        float centreX = x + width / 2;
        float centreY = y + height / 2;
        float rx = centreX - radius;
        float ry = centreY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        std::cout << rotaryStartAngle << " " << rotaryEndAngle << std::endl;
        
        Rectangle<float> dialArea (rx, ry, diameter, diameter);
        
        g.setColour(Colours::yellowgreen);
        //g.drawRect(dialArea);
        g.fillEllipse(dialArea);
        
        g.setColour(Colours::black);
        //g.fillEllipse(centreX, centreY, 5, 5);
        
        Path dialTick;
        dialTick.addRectangle(-5.0f, -radius, 10.0f, radius * 0.33);
        
        g.fillPath(dialTick, AffineTransform::rotation(angle).translated(centreX, centreY));
        
        g.setColour(Colours::black);
        g.drawEllipse(rx, ry, diameter, diameter, 5.0f);
        
    }
    
};

class OtherLookAndFeel3 : public LookAndFeel_V4
{
public:
    
    void drawRotarySlider (Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, Slider &slider) override
    {
        float diameter = jmin(width, height);
        float radius = diameter / 2;
        float centreX = x + width / 2;
        float centreY = y + height / 2;
        float rx = centreX - radius;
        float ry = centreY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        std::cout << rotaryStartAngle << " " << rotaryEndAngle << std::endl;
        
        Rectangle<float> dialArea (rx, ry, diameter, diameter);
        
        g.setColour(Colours::orangered);
        //g.drawRect(dialArea);
        g.fillEllipse(dialArea);
        
        g.setColour(Colours::black);
        //g.fillEllipse(centreX, centreY, 5, 5);
        
        Path dialTick;
        dialTick.addRectangle(-3.0f, -radius, 6.0f, radius * 0.33);
        
        g.fillPath(dialTick, AffineTransform::rotation(angle).translated(centreX, centreY));
        
        g.setColour(Colours::black);
        g.drawEllipse(rx, ry, diameter, diameter, 5.0f);
        
    }
    
};

class SoftwareSummativeAudioProcessorEditor  : public AudioProcessorEditor, Slider::Listener
{
public:
    SoftwareSummativeAudioProcessorEditor (SoftwareSummativeAudioProcessor&);
    ~SoftwareSummativeAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    

private:
	Image backGround;
	Image face;
	Image N1 = ImageCache::getFromMemory(BinaryData::N1_png, BinaryData::N1_pngSize);
	Image N2 = ImageCache::getFromMemory(BinaryData::N2_png, BinaryData::N2_pngSize);
	Image N3 = ImageCache::getFromMemory(BinaryData::N3_png, BinaryData::N3_pngSize);
	Image N4 = ImageCache::getFromMemory(BinaryData::N4_png, BinaryData::N4_pngSize);
	Image N5 = ImageCache::getFromMemory(BinaryData::N5_png, BinaryData::N5_pngSize);
	Image N6 = ImageCache::getFromMemory(BinaryData::N6_png, BinaryData::N6_pngSize);
	Image N7 = ImageCache::getFromMemory(BinaryData::N7_png, BinaryData::N7_pngSize);
	Image N8 = ImageCache::getFromMemory(BinaryData::N8_png, BinaryData::N8_pngSize);
	Image N9 = ImageCache::getFromMemory(BinaryData::N9_png, BinaryData::N9_pngSize);
	Image N10 = ImageCache::getFromMemory(BinaryData::N10_png, BinaryData::N10_pngSize);
	Image N11 = ImageCache::getFromMemory(BinaryData::N11_png, BinaryData::N11_pngSize);
	Image N12 = ImageCache::getFromMemory(BinaryData::N12_png, BinaryData::N12_pngSize);
	void setBackGround(double distVal);

	AnimatedComponent BigboyAnimation;
    
	OtherLookAndFeel otherLookAndFeel;
    OtherLookAndFeel2 otherLookAndFeel2;
    OtherLookAndFeel3 otherLookAndFeel3;
    
    Slider filterCutoffDial;
    Slider filterResDial;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterCutoffValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterResValue;
    //std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> filterCutoffValue;
    //std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> filterResValue;
    
    Label filterCutoffLabel;
    Label filterResLabel;
    
    Slider distDriveDial;
    Slider distRangeDial;
    Slider distBlendDial;
    Slider distVolumeDial;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> distDriveValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> distRangeValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> distBlendValue;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> distVolumeValue;
    
    Label distDriveLabel;
    Label distRangeLabel;
    Label distBlendLabel;
    Label distVolumeLabel;
    
    Slider mixSlider;
    Label mixLabel;
    

    
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> mixAttachment;
    
    void sliderValueChanged(Slider * slider) override;



    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SoftwareSummativeAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SoftwareSummativeAudioProcessorEditor)
};
