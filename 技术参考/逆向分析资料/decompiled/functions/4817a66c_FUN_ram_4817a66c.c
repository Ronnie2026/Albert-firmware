/* Firmware entry: 0x4817a66c */

int FUN_ram_4817a66c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                    undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_470 [63];
  char acStack_431 [16];
  char acStack_421 [1017];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(acStack_431 + 1,0,0x400);
  if (((param_2 == 0 && param_3 == 0) || (param_4 != 0)) &&
     (uVar6 = *(uint *)(param_1 + 4), uVar6 - 0x10 < 0x3f1)) {
    iVar2 = FUN_ram_48179632(param_1,param_7,acStack_431 + 1);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (acStack_431[uVar6] != -0x44) {
      return -0x4100;
    }
    if (param_2 != 0) {
      FUN_ram_4817697e(param_2);
      iVar2 = FUN_ram_48176d4c();
      if (iVar2 == 0) {
        return -0x4080;
      }
      if (param_3 != iVar2) {
        return -0x4080;
      }
    }
    FUN_ram_4817697e(param_5);
    iVar2 = FUN_ram_48176d4c();
    if (iVar2 != 0) {
      iVar3 = FUN_ram_4818006c(param_1 + 8);
      uVar9 = iVar3 - 1;
      if ((int)(uint)(byte)acStack_431[1] >> ((1 - uVar6) * 8 + uVar9 & 0x1f) == 0) {
        pcVar1 = acStack_431 + 2;
        uVar8 = uVar6 - 1;
        if ((uVar9 & 7) != 0) {
          pcVar1 = acStack_431 + 1;
          uVar8 = uVar6;
        }
        if (iVar2 + 2U <= uVar8) {
          iVar3 = (uVar8 - iVar2) + -1;
          pcVar7 = pcVar1 + iVar3;
          iVar3 = FUN_ram_48178b3a(pcVar1,iVar3,pcVar7,iVar2,param_5);
          if (iVar3 != 0) {
            return iVar3;
          }
          acStack_431[1] = (byte)(0xff >> (uVar8 * 8 - uVar9 & 0x1f)) & acStack_431[1];
          if (pcVar1 < pcVar7 + -1) {
            do {
              pcVar5 = pcVar1;
              cVar4 = *pcVar5;
              pcVar1 = pcVar5 + 1;
              if (cVar4 != '\0') goto LAB_ram_4817a782;
            } while (pcVar1 != pcVar7 + -1);
            cVar4 = pcVar5[1];
            pcVar5 = pcVar1;
          }
          else {
            cVar4 = *pcVar1;
            pcVar5 = pcVar1;
          }
LAB_ram_4817a782:
          if (cVar4 != '\x01') {
            return -0x4100;
          }
          iVar3 = (int)pcVar7 - (int)(pcVar5 + 1);
          if ((param_6 != -1) && (iVar3 != param_6)) {
            return -0x4100;
          }
          iVar3 = FUN_ram_48178c42(param_4,param_3,pcVar5 + 1,iVar3,auStack_470,param_5);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar2 = FUN_ram_4ff4511a(pcVar7,auStack_470,iVar2);
          if (iVar2 != 0) {
            return -0x4380;
          }
          return 0;
        }
      }
    }
  }
  return -0x4080;
}


