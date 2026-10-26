/* Firmware entry: 0x481a5ca0 */

undefined4 FUN_ram_481a5ca0(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar2,
                     &DAT_ram_481e0c8c,"gdma_config_transfer",0x16b);
    return 0x102;
  }
  uVar5 = *param_2;
  if (uVar5 == 0) {
    piVar6 = (int *)*param_1;
    iVar7 = *piVar6 + 8;
    iVar1 = FUN_ram_4ff20684();
    if ((iVar1 == 0) || ((char)param_2[1] == '\0')) {
      FUN_ram_481a8eb4(iVar7,piVar6[1],param_1[4],0,1);
      iVar1 = 1;
      goto LAB_ram_481a5d48;
    }
LAB_ram_481a5d74:
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,&DAT_ram_481e0c8c,
                     "W (%lu) %s: GDMA channel access encrypted external memory, adjust burst size to %d\n"
                     ,uVar2,&DAT_ram_481e0c8c,0x10);
    uVar5 = 0x10;
LAB_ram_481a5d00:
    FUN_ram_481a8eb4(iVar7,piVar6[1],param_1[4],1);
    iVar1 = 0x10;
  }
  else {
    if ((uVar5 - 1 & uVar5) != 0) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = "E (%lu) %s: %s(%d): invalid max_data_burst_size: %lu\n";
      uVar2 = 0x16f;
LAB_ram_481a5dce:
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,pcVar4,uVar3,&DAT_ram_481e0c8c,"gdma_config_transfer",
                       uVar2,uVar5);
      return 0x102;
    }
    if (((char)param_2[1] != '\0') && (0x80 < uVar5)) {
      uVar3 = FUN_ram_4ff44d14();
      pcVar4 = 
      "E (%lu) %s: %s(%d): max_data_burst_size must not exceed %d when accessing external memory\n";
      uVar2 = 0x173;
      uVar5 = 0x80;
      goto LAB_ram_481a5dce;
    }
    piVar6 = (int *)*param_1;
    iVar7 = *piVar6 + 8;
    iVar1 = FUN_ram_4ff20684();
    if ((iVar1 != 0) && ((char)param_2[1] != '\0')) {
      if (uVar5 < 0x10) goto LAB_ram_481a5d74;
      goto LAB_ram_481a5d00;
    }
    FUN_ram_481a8eb4(iVar7,piVar6[1],param_1[4],1);
    iVar1 = 1;
  }
  FUN_ram_481a8eb8(iVar7,piVar6[1],param_1[4],uVar5);
LAB_ram_481a5d48:
  if ((char)param_2[1] == '\0') {
    iVar1 = -0x80000000;
  }
  param_1[7] = iVar1;
  param_1[6] = 1;
  return 0;
}


