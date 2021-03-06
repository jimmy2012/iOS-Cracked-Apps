//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject<OS_dispatch_queue>, NSString, NSURL, TBPSWVPopLayer, TBXSearchVideoView, UIImage, UIView, UIViewController;

@interface TBXSearchFaceTimeViewController : TBViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    UIViewController *_navController;
    TBPSWVPopLayer *_WVPopLayer;
    TBXSearchVideoView *_videoView;
    UIView *_cameraView;
    _Bool _isRunning;
    _Bool _shouldStartCapturingWhenBecomesActive;
    _Bool _shouldStartCapturingWhenWillAppear;
    NSURL *_url;
    NSURL *_videoUrl;
    NSURL *_picUrl;
    UIImage *_picture;
    long long _playState;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureStillImageOutput *_captureOutput;
    AVCaptureVideoPreviewLayer *_capturePreviewLayer;
    AVCaptureDevice *_captureDevice;
    UIImage *_shareImage;
    UIImage *_cameraImage;
    NSString *_keyWord;
    NSString *_tips;
    CDUnknownBlockType _takeAPhotoCompletion;
    NSObject<OS_dispatch_queue> *_captureQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(copy, nonatomic) CDUnknownBlockType takeAPhotoCompletion; // @synthesize takeAPhotoCompletion=_takeAPhotoCompletion;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) UIImage *cameraImage; // @synthesize cameraImage=_cameraImage;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(nonatomic) _Bool shouldStartCapturingWhenWillAppear; // @synthesize shouldStartCapturingWhenWillAppear=_shouldStartCapturingWhenWillAppear;
@property(nonatomic) _Bool shouldStartCapturingWhenBecomesActive; // @synthesize shouldStartCapturingWhenBecomesActive=_shouldStartCapturingWhenBecomesActive;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *capturePreviewLayer; // @synthesize capturePreviewLayer=_capturePreviewLayer;
@property(retain, nonatomic) AVCaptureStillImageOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *captureInput; // @synthesize captureInput=_captureInput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) UIImage *picture; // @synthesize picture=_picture;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSURL *picUrl; // @synthesize picUrl=_picUrl;
@property(readonly, nonatomic) TBPSWVPopLayer *WVPopLayer; // @synthesize WVPopLayer=_WVPopLayer;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)closeViewController;
- (_Bool)forbidbackPanGestureRecognized;
- (void)checkDeviceAuthorizationStatus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)registerWVPlugins;
- (id)captureDeviceWithPosition:(long long)arg1;
- (void)shareImage:(id)arg1;
- (id)didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)takeAPhotoCapture:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)takeAPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)doShare;
- (void)switchCamera;
- (_Bool)play;
- (void)reloadWVPopLayer;
- (void)setupCamera;
- (void)setupVideoView;
- (void)setupWVPopLayer;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

