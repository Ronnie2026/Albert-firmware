/* Firmware entry: 0x48160270 */

int FUN_ram_48160270(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_481601d4(param_1,0,param_1 + 0x68);
  if (iVar2 == 0) {
    bVar1 = (byte)(*(uint *)(param_1 + 0x68) >> 0x18);
    *(byte *)(param_1 + 0xc4) =
         bVar1 >> 1 & 0x38 | bVar1 >> 3 & 1 | 2 | *(byte *)(param_1 + 0xc4) & 0xc4;
    *(uint *)(param_1 + 0xc4) =
         *(uint *)(param_1 + 0xc4) & 0xfffffffd |
         (uint)((*(uint *)(param_1 + 0xc4) & 0x38) != 0) << 1;
    iVar2 = FUN_ram_481601d4(param_1,*(uint *)(param_1 + 0x68) & 0xff8000,param_1 + 0x68);
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_io","E (%lu) %s: %s: sdmmc_io_send_op_cond (1) returned 0x%x\n",
                       uVar3,"sdmmc_io","sdmmc_init_io",iVar2);
      return iVar2;
    }
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 4));
    }
  }
  else {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfc | 1;
  }
  return 0;
}


