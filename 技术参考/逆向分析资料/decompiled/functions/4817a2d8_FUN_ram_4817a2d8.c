/* Firmware entry: 0x4817a2d8 */

int FUN_ram_4817a2d8(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                    undefined4 param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte local_430 [11];
  undefined1 auStack_425 [1025];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x70) == 0) {
    if (iVar6 - 0x10U < 0x3f1) {
      iVar1 = FUN_ram_481796e2();
      if (iVar1 == 0) {
        uVar7 = param_7;
        if (iVar6 - 0xbU < param_7) {
          uVar7 = iVar6 - 0xbU;
        }
        uVar2 = 0;
        uVar5 = 0;
        pbVar3 = local_430 + 2;
        do {
          uVar2 = uVar2 | ~((int)(-(uint)*pbVar3 | -(uint)(*pbVar3 >> 1)) >> 0x1f);
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + (~uVar2 & 1);
        } while (pbVar3 != local_430 + iVar6);
        uVar4 = (int)(uVar5 ^ 8) >> 0x1f;
        uVar4 = (int)(uVar4 | -(-uVar4 >> 1)) >> 0x1f;
        uVar4 = (int)(uVar5 - 8 & ~uVar4 | uVar4 & 8) >> 0x1f;
        uVar4 = (int)(-(-uVar4 >> 1) | uVar4) >> 0x1f |
                (int)(-(uint)local_430[0] | -(local_430[1] ^ 2) | -(uint)(local_430[0] >> 1) |
                     -((local_430[1] ^ 2) >> 1)) >> 0x1f | ~uVar2;
        uVar5 = (iVar6 - uVar5) - 3 & ~uVar4 | uVar7 & uVar4;
        uVar2 = (int)(uVar7 ^ uVar5) >> 0x1f;
        uVar2 = (int)(uVar2 | -(-uVar2 >> 1)) >> 0x1f;
        uVar2 = (int)(uVar7 - uVar5 & ~uVar2 | uVar5 & uVar2) >> 0x1f;
        uVar2 = (int)(-(-uVar2 >> 1) | uVar2) >> 0x1f;
        FUN_ram_48172538(uVar4 | uVar2,auStack_425);
        iVar1 = -(uVar2 & 0x4400 & ~uVar4 | uVar4 & 0x4100);
        uVar2 = ~uVar2 & uVar5 | uVar7 & uVar2;
        FUN_ram_481723ec(local_430 + (iVar6 - uVar7),uVar7,uVar7 - uVar2);
        if (param_7 != 0) {
          FUN_ram_4ff45158(param_6,local_430 + (iVar6 - uVar7),uVar7);
        }
        *param_4 = uVar2;
      }
      FUN_ram_48178af2(local_430,0x400);
    }
    else {
      iVar1 = -0x4080;
    }
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}


