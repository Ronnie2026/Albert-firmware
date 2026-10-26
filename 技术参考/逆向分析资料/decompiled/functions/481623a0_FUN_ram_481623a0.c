/* Firmware entry: 0x481623a0 */

undefined4 FUN_ram_481623a0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar3 = uVar5 >> 0x1e;
  *param_2 = uVar3;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 8);
    uVar4 = (*(uint *)(param_1 + 4) >> 0x1e | (uVar3 & 0x3ff) << 2) + 1 <<
            (*(uint *)(param_1 + 4) >> 0xf & 7) + 2;
    uVar2 = uVar3 >> 0x10 & 0xf;
    param_2[4] = uVar2;
    param_2[5] = uVar3 >> 0x14;
    uVar2 = 1 << uVar2;
    param_2[2] = uVar4;
    uVar3 = uVar2;
    if (0x200 < (int)uVar2) {
      uVar3 = 0x200;
    }
    param_2[3] = uVar3;
    if (0x200 < (int)uVar2) {
      param_2[2] = ((int)uVar2 >> 9) * uVar4;
    }
  }
  else {
    if (uVar3 != 1) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: unknown SD CSD structure version 0x%x\n",uVar1,
                       "sdmmc_sd",*param_2);
      return 0x106;
    }
    uVar3 = *(uint *)(param_1 + 8);
    param_2[2] = ((uint)*(ushort *)(param_1 + 6) | uVar3 << 0x10) * 0x400 + 0x400;
    param_2[5] = uVar3 >> 0x14;
    param_2[4] = 9;
    param_2[3] = 0x200;
  }
  if ((uVar5 & 0xff) == 0x2b) {
    param_2[6] = 200000000;
  }
  else if ((uVar5 & 0xff) == 0x5a) {
    param_2[6] = 50000000;
  }
  else if ((uVar5 & 0xff) == 0xb) {
    param_2[6] = 100000000;
  }
  else {
    param_2[6] = 25000000;
  }
  return 0;
}


