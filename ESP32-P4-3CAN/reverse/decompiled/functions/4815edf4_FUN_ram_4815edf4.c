/* Firmware entry: 0x4815edf4 */

int FUN_ram_4815edf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff45158(auStack_20,param_1 + 0x6c,0x10);
  iVar1 = FUN_ram_48160cc2(*(undefined4 *)(param_1 + 0x8c),auStack_20,param_1 + 0x6c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: decoding CID failed (0x%x)\n",uVar2,
                   "sdmmc_common","sdmmc_init_mmc_decode_cid",iVar1);
  return iVar1;
}


