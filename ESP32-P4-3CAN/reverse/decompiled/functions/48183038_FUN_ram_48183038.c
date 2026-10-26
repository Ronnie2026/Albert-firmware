/* Firmware entry: 0x48183038 */

int FUN_ram_48183038(undefined4 *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte local_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte abStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar7 = local_60;
  pbVar6 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[0x10] = 0;
  local_60[0x11] = 0;
  local_60[0x12] = 0;
  local_60[0x13] = 0;
  local_60[0x14] = 0;
  local_60[0x15] = 0;
  local_60[0x16] = 0;
  local_60[0x17] = 0;
  local_60[0x18] = 0;
  local_60[0x19] = 0;
  local_60[0x1a] = 0;
  local_60[0x1b] = 0;
  local_60[0x1c] = 0;
  local_60[0x1d] = 0;
  local_60[0x1e] = 0;
  local_60[0x1f] = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  do {
    iVar4 = __bswapsi2(param_1[3]);
    uVar5 = __bswapsi2(iVar4 + 1);
    *(char *)(param_1 + 3) = (char)uVar5;
    *(char *)((int)param_1 + 0xd) = (char)((uint)uVar5 >> 8);
    *(char *)((int)param_1 + 0xe) = (char)((uint)uVar5 >> 0x10);
    *(char *)((int)param_1 + 0xf) = (char)((uint)uVar5 >> 0x18);
    puVar3 = param_1 + 2;
    if (iVar4 + 1 == 0) {
      do {
        iVar4 = __bswapsi2(*puVar3);
        uVar5 = __bswapsi2(iVar4 + 1);
        *(char *)puVar3 = (char)uVar5;
        *(char *)((int)puVar3 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)((int)puVar3 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)((int)puVar3 + 3) = (char)((uint)uVar5 >> 0x18);
        if (iVar4 + 1 != 0) break;
        bVar1 = param_1 != puVar3;
        puVar3 = puVar3 + -1;
      } while (bVar1);
    }
    iVar4 = FUN_ram_4817b620(param_1 + 8,1,param_1,pbVar7);
    if (iVar4 != 0) goto LAB_ram_48183166;
    pbVar7 = pbVar7 + 0x10;
  } while (pbVar7 != abStack_30);
  do {
    bVar2 = *param_2;
    pbVar7 = pbVar6 + 1;
    param_2 = param_2 + 1;
    *pbVar6 = *pbVar6 ^ bVar2;
    pbVar6 = pbVar7;
  } while (abStack_30 != pbVar7);
  iVar4 = FUN_ram_4817b524(param_1 + 8,local_60,0x100);
  if (iVar4 == 0) {
    FUN_ram_4ff45158(param_1,&uStack_40,0x10);
  }
LAB_ram_48183166:
  FUN_ram_48178af2(local_60,0x30);
  return iVar4;
}


