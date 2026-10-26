/* Firmware entry: 0x48182db0 */

int FUN_ram_48182db0(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint local_254 [4];
  undefined1 local_244 [32];
  undefined1 auStack_224 [36];
  uint local_200 [8];
  undefined1 auStack_1e0 [16];
  undefined4 local_1d0;
  uint uStack_1c0;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [396];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x180 < param_3) {
    return -0x38;
  }
  memset(&local_1d0,0,0x1a0);
  uStack_1c0 = __bswapsi2(param_3);
  uStack_1b9 = 0x30;
  FUN_ram_4ff45158(auStack_1b8,param_2,param_3);
  auStack_1b8[param_3] = 0x80;
  puVar4 = local_244;
  iVar6 = 0;
  do {
    *puVar4 = (char)iVar6;
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0x20);
  FUN_ram_4817b4f8(auStack_224);
  iVar6 = FUN_ram_4817b524(auStack_224,local_244,0x100);
  if (iVar6 == 0) {
    puVar8 = local_200;
    do {
      local_254[0] = 0;
      local_254[1] = 0;
      local_254[2] = 0;
      local_254[3] = 0;
      puVar1 = &uStack_1c0;
      puVar7 = &local_1d0;
      puVar5 = local_254;
      puVar10 = puVar7;
      uVar9 = param_3 + 0x19;
      do {
        do {
          uVar3 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar3 ^ *puVar5;
          puVar5 = puVar5 + 1;
        } while (puVar7 != puVar1);
        puVar7 = puVar10 + 4;
        uVar3 = uVar9;
        if (0x10 < uVar9) {
          uVar3 = 0x10;
        }
        uVar9 = uVar9 - uVar3;
        uVar11 = FUN_ram_4817b620(auStack_224,1,local_254,local_254);
        if ((int)uVar11 != 0) goto LAB_ram_48182ffa;
        puVar1 = puVar1 + 4;
        puVar5 = local_254;
        puVar10 = puVar7;
      } while (uVar9 != 0);
      local_1d0._3_1_ = local_1d0._3_1_ + '\x01';
      *puVar8 = local_254[0];
      puVar8[1] = local_254[1];
      puVar8[2] = local_254[2];
      puVar8[3] = local_254[3];
      puVar8 = puVar8 + 4;
    } while (&local_1d0 != puVar8);
    iVar6 = FUN_ram_4817b524(auStack_224,local_200,0x100);
    if (iVar6 == 0) {
      iVar6 = param_1;
      while( true ) {
        iVar2 = FUN_ram_4817b620(auStack_224,1,auStack_1e0);
        uVar11 = CONCAT44(auStack_1e0,iVar2);
        if (iVar2 != 0) break;
        iVar2 = iVar6 + 0x10;
        FUN_ram_4ff45158(iVar6,auStack_1e0,0x10);
        iVar6 = iVar2;
        if (iVar2 == param_1 + 0x30) {
          FUN_ram_4817b512(auStack_224);
          FUN_ram_48178af2(&local_1d0,0x1a0);
          FUN_ram_48178af2(local_200,0x30);
          FUN_ram_48178af2(local_244,0x20);
          FUN_ram_48178af2(local_254,0x10);
          return 0;
        }
      }
LAB_ram_48182ffa:
      iVar6 = (int)uVar11;
      FUN_ram_4817b512(auStack_224,(int)((ulonglong)uVar11 >> 0x20));
      FUN_ram_48178af2(&local_1d0,0x1a0);
      FUN_ram_48178af2(local_200,0x30);
      FUN_ram_48178af2(local_244,0x20);
      FUN_ram_48178af2(local_254,0x10);
      goto LAB_ram_48182fc6;
    }
  }
  FUN_ram_4817b512(auStack_224);
  FUN_ram_48178af2(&local_1d0,0x1a0);
  FUN_ram_48178af2(local_200,0x30);
  FUN_ram_48178af2(local_244,0x20);
  FUN_ram_48178af2(local_254,0x10);
LAB_ram_48182fc6:
  FUN_ram_48178af2(param_1,0x30);
  return iVar6;
}


