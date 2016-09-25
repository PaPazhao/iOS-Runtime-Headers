/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface _PHAVisionServiceFaceProcessingWorkerFaceClusteringJob : PHAWorkerJob {
    BOOL  _completed;
    PHAVisionServiceFaceProcessingWorker * _faceProcessingWorker;
    _PHAVisionServiceFaceProcessingWorkerJobKeepAlive * _keepAlive;
}

- (void).cxx_destruct;
- (void)_handleClusteringCompletion;
- (void)_startJobKeepAlive;
- (void)_stopJobKeepAlive;
- (float)completionScore;
- (id)faceProcessingWorker;
- (BOOL)finished;
- (id)initWithFaceProcessingWorker:(id)arg1 scenario:(unsigned int)arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end