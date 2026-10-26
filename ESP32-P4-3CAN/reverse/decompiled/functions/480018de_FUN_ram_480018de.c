/* Firmware entry: 0x480018de */

char * FUN_ram_480018de(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 0;
  piVar3 = &DAT_ram_481e3a28;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 2;
    if (iVar1 == param_1) {
      return (&PTR_s_ESP_FAIL_ram_481b06f4_ram_481e3a2c)[iVar2 * 2];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xe3);
  return "ERROR";
}


