//==============================================================================
// ��������
//==============================================================================

{$IFDEF COMPILER5_UP}
  {$DEFINE SUPPORT_PASCAL_SCRIPT}
  {$DEFINE SUPPORT_PRJ_BACKUP}
{$ENDIF}

{$IFNDEF IS_MASTER}
  {$UNDEF SUPPORT_PASCAL_SCRIPT}
{$ENDIF}

{$IFDEF DELPHI2007_UP}
  {$UNDEF CNWIZARDS_CNFASTCODEWIZARD}
{$ENDIF}

{$IFDEF COMPILER9_UP}
  {$DEFINE USE_DDETOURS_HOOK}
  
  // DEBUG/JCL and DDETOURS conflicts under D2007 or below.
  {$IFDEF USE_JCL}
    {$IFNDEF COMPILER12_UP}
      {$UNDEF USE_DDETOURS_HOOK}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}
