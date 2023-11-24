// ----------------------------------------------------------------------------------------------------
// PlayIdle()
// ----------------------------------------------------------------------------------------------------
// TODO: Third argument.

RE::Actor* actor = ...;
/*
    Creation Kit -> GAMEPLAY -> Animations -> Actors\Character\Behaviors\0_Master.hkx -> LOOSE -> Mouse Hover

    For non-human actors select apropriate hkx path.
*/
RE::FormID idleAnimFormId = 0x000FD68B;
if (RE::TESIdleForm* idleAnim = RE::TESForm::LookupByID<RE::TESIdleForm>(idleAnimFormId); idleAnim) {
    if (RE::AIProcess* aiProcess = actor->GetActorRuntimeData().currentProcess; aiProcess) {
        /*
            Can fail if for example:
                * Not supported animation chosen (dog animation for human actor).
                * Animation conditions not met (from Creation Kit Animations window).
        */
        bool success = aiProcess->PlayIdle(actor, idleAnim, nullptr);
    }
}
// ----------------------------------------------------------------------------------------------------
