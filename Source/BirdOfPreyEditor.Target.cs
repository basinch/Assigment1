using UnrealBuildTool;
using System.Collections.Generic;

public class BirdOfPreyEditorTarget : TargetRules
{
    public BirdOfPreyEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V4;
        bOverrideBuildEnvironment = true;
    }
}
