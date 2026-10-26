/* Firmware entry: 0x480c6116 */

void FUN_ram_480c6116(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte abStack_1ac [4];
  int local_1a8 [3];
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [20];
  undefined1 uStack_164;
  undefined1 uStack_14e;
  undefined1 uStack_141;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 uStack_120;
  undefined1 uStack_108;
  undefined1 uStack_f0;
  undefined4 local_d4 [43];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar7 = (undefined4 *)(param_1 + 0xb38);
  puVar5 = local_d4;
  do {
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    *puVar5 = *puVar7;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar7 = puVar7 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar7 != (undefined4 *)(param_1 + 0xbd8));
  *puVar5 = *puVar7;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  if (3 < (byte)(*(char *)(param_1 + 0x7c58) - 3U)) {
    piVar6 = (int *)(param_1 + 0x5dc);
    do {
      iVar10 = *piVar6 + 1;
      if (iVar10 == 0) {
        iVar10 = 1;
      }
      *piVar6 = iVar10;
      piVar6 = piVar6 + 0x2c;
    } while (piVar6 != (int *)(param_1 + 0x7ec));
  }
  iStack_19c = DAT_ram_48222d48;
  uStack_198 = DAT_ram_48222d4c;
  uStack_194 = DAT_ram_48222d50;
  uStack_190 = DAT_ram_48222d54;
  uStack_18c = DAT_ram_48222d58;
  uStack_188 = DAT_ram_48222d5c;
  uStack_184 = DAT_ram_48222d60;
  uStack_180 = DAT_ram_48222d64;
  uStack_17c = DAT_ram_48222d68;
  if ((*(int *)(param_1 + 0x8fe0) != 0) &&
     (iVar10 = FUN_ram_4809e23a(param_1 + 0x84a8,local_d4,param_2,&iStack_19c), iVar10 != 0)) {
    piVar6 = (int *)(param_1 + 0x5f4);
    do {
      iVar10 = *piVar6 + 1;
      if (iVar10 == 0) {
        iVar10 = 1;
      }
      *piVar6 = iVar10;
      piVar6 = piVar6 + 0x2c;
    } while (piVar6 != (int *)(param_1 + 0x804));
  }
  local_1a8[0] = *(int *)(param_1 + 0x8310);
  local_1a8[1] = *(undefined4 *)(param_1 + 0x7e88);
  local_1a8[2] = *(undefined4 *)(param_1 + 0x840c);
  abStack_1ac[0] = 6;
  abStack_1ac[1] = 0xb;
  abStack_1ac[2] = 0xc;
  piVar6 = local_1a8;
  pbVar9 = abStack_1ac;
  do {
    iVar10 = *piVar6;
    if (iVar10 != 0) {
      memset(auStack_178,0,0xa0);
      uStack_164 = 8;
      uStack_14e = 1;
      uStack_141 = 1;
      uStack_134 = 1;
      uStack_120 = 8;
      uStack_108 = 8;
      uStack_f0 = 8;
      iStack_138 = iVar10;
      iVar10 = FUN_ram_480c5c90(param_1 + 0x7cd0,auStack_178,param_3);
      if (iVar10 != 0) {
        bVar1 = *pbVar9;
        iVar10 = param_1 + (uint)bVar1 * 8;
        do {
          iVar8 = *(int *)(iVar10 + 0x5a4) + 1;
          if (iVar8 == 0) {
            iVar8 = 1;
          }
          *(int *)(iVar10 + 0x5a4) = iVar8;
          iVar10 = iVar10 + 0xb0;
        } while (iVar10 != param_1 + 0x210 + (uint)bVar1 * 8);
      }
    }
    piVar6 = piVar6 + 1;
    pbVar9 = pbVar9 + 1;
  } while (piVar6 != &iStack_19c);
  return;
}


