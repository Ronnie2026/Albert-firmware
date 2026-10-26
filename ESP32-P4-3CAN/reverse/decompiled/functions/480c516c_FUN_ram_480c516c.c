/* Firmware entry: 0x480c516c */

undefined8 FUN_ram_480c516c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 auStack_248 [2];
  undefined1 uStack_246;
  undefined1 local_240 [72];
  undefined4 local_1f8 [2];
  undefined1 uStack_1ee;
  undefined4 uStack_1ec;
  undefined4 local_1e8 [5];
  undefined1 uStack_1d1;
  char cStack_154;
  char cStack_153;
  char cStack_152;
  char cStack_151;
  char cStack_150;
  char cStack_14f;
  undefined4 uStack_58;
  undefined1 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  puVar8 = (undefined4 *)(iVar1 + 0xb38);
  puVar7 = local_1f8;
  do {
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar8 != (undefined4 *)(iVar1 + 0xbd8));
  *puVar7 = *puVar8;
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  puVar8 = (undefined4 *)(param_1 + 0xd4);
  puVar7 = (undefined4 *)local_240;
  do {
    uVar10 = puVar8[1];
    uVar9 = puVar8[2];
    uVar4 = puVar8[3];
    uVar5 = puVar8[4];
    uVar6 = puVar8[5];
    *puVar7 = *puVar8;
    puVar7[1] = uVar10;
    puVar7[2] = uVar9;
    puVar7[3] = uVar4;
    puVar7[4] = uVar5;
    puVar7[5] = uVar6;
    puVar8 = puVar8 + 6;
    puVar7 = puVar7 + 6;
  } while (puVar8 != (undefined4 *)(param_1 + 0x11c));
  uVar3 = 0;
  if (((byte)(*(char *)(*(int *)(param_1 + 0x58) + 0x7c58) - 3U) < 4) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x7c64), iVar1 != 0)) {
    uVar3 = (uint)((uint)(param_2 - iVar1) < 0x1f5);
  }
  _auStack_248 = CONCAT12(uStack_1ee,CONCAT11(uStack_1d1,local_240[0]));
  if (uStack_1ec._1_1_ != '\0') {
    piVar11 = *(int **)(param_1 + 0x5c);
    piVar2 = piVar11 + 0x297;
    FUN_ram_4ff3ec14(piVar2,0xffffffff);
    piVar11 = (int *)*piVar11;
    FUN_ram_4ff3ee10(piVar2);
    if (piVar11 != (int *)0x0) {
      memset(&cStack_154,0,0x134);
      uStack_58 = 0xffffffff;
      uStack_44 = 1;
      iVar1 = (**(code **)(*piVar11 + 0x15c))
                        (piVar11,4,&cStack_154,0xffffffff,1,*(code **)(*piVar11 + 0x15c));
      if ((((iVar1 != 0) && (cStack_154 != '\0')) && (cStack_153 != '\0')) &&
         (((cStack_152 == '\0' && (cStack_151 == '\0')) &&
          ((cStack_150 == '\0' && (cStack_14f == '\0')))))) goto LAB_ram_480c5254;
    }
  }
  cStack_153 = '\0';
LAB_ram_480c5254:
  return CONCAT44(uVar3,CONCAT13(cStack_153,_auStack_248));
}


