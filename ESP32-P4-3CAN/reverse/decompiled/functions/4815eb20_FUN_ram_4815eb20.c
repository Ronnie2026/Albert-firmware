/* Firmware entry: 0x4815eb20 */

int FUN_ram_4815eb20(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  byte abStack_21 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = -(uint)((*param_1 & 8) == 0) & 0xff8000;
  if ((int)(param_1[0x1a] << 1) < 0) {
    uVar3 = uVar3 | 0x40000000;
  }
  abStack_21[0] = 0;
  if ((code *)param_1[0x19] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0x19])(param_1[1],abStack_21);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s(%d): failed to get slot info\n",uVar2,
                       "sdmmc_common","sdmmc_init_ocr",0x31);
      return iVar1;
    }
    uVar3 = uVar3 | -(uint)abStack_21[0] & 0x11000000;
  }
  puVar4 = param_1 + 0x1a;
  iVar1 = FUN_ram_48162922(param_1,uVar3,puVar4);
  if (iVar1 == 0x107) {
    if ((*param_1 & 8) != 0) goto LAB_ram_4815ebb0;
    param_1[0x31] = param_1[0x31] | 4;
    iVar1 = FUN_ram_48162922(param_1,uVar3,puVar4);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
    if (((*param_1 & 8) != 0) && (iVar1 = FUN_ram_48162ac4(param_1,puVar4), iVar1 != 0)) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: read_ocr returned 0x%x\n",uVar2,
                       "sdmmc_common","sdmmc_init_ocr",iVar1);
    }
    return iVar1;
  }
LAB_ram_4815ebb0:
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: %s: send_op_cond (1) returned 0x%x\n",uVar2,
                   "sdmmc_common","sdmmc_init_ocr",iVar1);
  return iVar1;
}


