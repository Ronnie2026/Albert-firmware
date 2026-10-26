/* Firmware entry: 0x4812d7fc */

int FUN_ram_4812d7fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    iVar5 = DAT_ram_4ff6e094;
    if (DAT_ram_4ff6e094 == 0) {
      iVar5 = FUN_ram_4812cfa8();
    }
  }
  else {
    iVar5 = FUN_ram_4812e238();
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("esp_ota_ops.c",0x2ea,"esp_ota_get_next_update_partition",
                       "start_from != NULL");
    }
  }
  iVar3 = 0x10;
  bVar1 = false;
  iVar4 = 0;
  do {
    iVar6 = FUN_ram_4812e1d6(0,iVar3,0);
    if (iVar6 != 0) {
      iVar2 = iVar6;
      if (iVar4 != 0) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      if (iVar6 == iVar5) {
        bVar1 = true;
      }
      else if (bVar1) {
        return iVar6;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return iVar4;
}


