// ----------------------------------------------------------------------------------------------------
// Decapitate()
// ----------------------------------------------------------------------------------------------------
/*
    Cuts off the actor's head.
*/

RE::Actor* actor = ...;
actor->Decapitate();
// ----------------------------------------------------------------------------------------------------

// ----------------------------------------------------------------------------------------------------
// GetEditorLocation2()
// ----------------------------------------------------------------------------------------------------
RE::Actor* actor = ...;
RE::NiPoint3 pos;
RE::NiPoint3 rot;
RE::TESForm* worldOrCell;
if (actor->GetEditorLocation2(pos, rot, worldOrCell, nullptr)) {
    // pos should contain actor EDITOR position (base position from Creation Kit).
    // rot should contain actor EDITOR rotation (base rotation from Creation Kit).
    // worldOrCell should contain:
    //     * actor EDITOR world (base world from Creation Kit) if actor is placed in the exterior.
    //     * actor EDITOR cell (base cell from Creation Kit) if actor is placed in the interior.
}
// ----------------------------------------------------------------------------------------------------
