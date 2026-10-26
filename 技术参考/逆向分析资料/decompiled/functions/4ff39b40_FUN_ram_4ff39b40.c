/* Firmware entry: 0x4ff39b40 */

undefined4 FUN_ram_4ff39b40(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_4c;
  int aiStack_48 [5];
  int *piStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  iVar4 = FUN_ram_4ff38a6a(&uStack_4c,aiStack_48);
  iVar1 = aiStack_48[0];
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  iVar4 = aiStack_48[0] + 0x18;
  aiStack_48[1] = 0;
  aiStack_48[2] = 0;
  aiStack_48[4] = 0;
  piStack_34 = (int *)0x0;
  aiStack_48[3] = 0x204a;
  aiStack_48[0] = 0x2a5;
  FUN_ram_4ff38838(iVar4,aiStack_48,2);
  piVar2 = piStack_34;
  if (aiStack_48[2] != 0) {
    FUN_ram_4ff3a92c(param_1);
  }
  if (piVar2 != (int *)0x0) {
    param_1[0x107] = *piVar2;
    FUN_ram_4ff45158(param_1 + 0x108,piVar2 + 1,0x41);
  }
  uVar7 = (uint)*(ushort *)(iVar1 + 0x44);
  if (uVar7 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x34) + 0x18 + iVar1);
    uVar3 = 0;
    bVar6 = false;
    do {
      while (*piVar2 != 1) {
LAB_ram_4ff39bc6:
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 8;
        if (uVar7 <= uVar3) goto LAB_ram_4ff39c20;
      }
      if (bVar6) {
        FUN_ram_4ff3a932(param_1,piVar2[1] + iVar4);
        FUN_ram_4ff3a982(param_1 + 6,piVar2[2],piVar2[1] + iVar4,piVar2[5]);
        break;
      }
      if (piVar2[2] != *param_1) goto LAB_ram_4ff39bc6;
      iVar8 = piVar2[1];
      pvVar5 = memset(param_1 + 1,0,0x10);
      strlcpy(pvVar5,iVar8 + iVar4 + 0x34,0x10);
      uVar7 = (uint)*(ushort *)(iVar1 + 0x44);
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 8;
      bVar6 = true;
    } while (uVar3 < uVar7);
  }
LAB_ram_4ff39c20:
  thunk_FUN_ram_4812fb50(uStack_4c);
  return 0;
}


