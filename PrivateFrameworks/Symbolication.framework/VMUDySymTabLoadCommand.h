/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDySymTabLoadCommand : VMULoadCommand {
    NSUInteger _extrefsymoff;
    NSUInteger _extreloff;
    NSUInteger _iextdefsym;
    NSUInteger _ilocalsym;
    NSUInteger _indirectsymoff;
    NSUInteger _iundefsym;
    NSUInteger _locreloff;
    NSUInteger _modtaboff;
    NSUInteger _nextdefsym;
    NSUInteger _nextrefsyms;
    NSUInteger _nextrel;
    NSUInteger _nindirectsyms;
    NSUInteger _nlocalsym;
    NSUInteger _nlocrel;
    NSUInteger _nmodtab;
    NSUInteger _ntoc;
    NSUInteger _nundefsym;
    NSUInteger _tocoff;
}

- (NSUInteger)indirectsymoff;
- (id)initWithMemory:(id)arg1;
- (BOOL)isDySymTab;
- (NSUInteger)nindirectsyms;

@end
