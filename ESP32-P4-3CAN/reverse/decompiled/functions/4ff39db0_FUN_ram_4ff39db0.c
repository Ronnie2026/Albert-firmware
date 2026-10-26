/* Firmware entry: 0x4ff39db0 */

int FUN_ram_4ff39db0(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *__s;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)*(byte *)(param_1 + 9);
  if (DAT_ram_4ff5b0b4 <= *param_1 + param_3 + uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  iVar6 = 0;
  __s = param_1 + 1;
  if (param_3 != 0) {
    while( true ) {
      uVar2 = 0x20 - uVar3;
      if (param_3 < 0x20 - uVar3) {
        uVar2 = param_3;
      }
      FUN_ram_4ff45158(uVar3 + 4 + (int)param_1,param_2 + iVar6,uVar2);
      bVar1 = *(byte *)(param_1 + 9);
      *(char *)(param_1 + 9) = (char)(bVar1 + uVar2);
      if ((bVar1 + uVar2 & 0xff) == 0x20) {
        iVar4 = FUN_ram_4ff39c78(DAT_ram_4ff5b0b0 + *param_1,__s,0x20);
        if (iVar4 != 0) {
          uVar5 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s__Failed_to_write_cach_ram_4ff55b44,uVar5,
                     s_esp_core_dump_flash_ram_4ff58544,iVar4);
          return iVar4;
        }
        *param_1 = *param_1 + 0x20;
        FUN_ram_4ff387e2(param_1 + 10,__s,0x20);
        *(undefined1 *)(param_1 + 9) = 0;
        memset(__s,0,0x20);
      }
      param_3 = param_3 - uVar2;
      if (param_3 == 0) break;
      iVar6 = iVar6 + uVar2;
      uVar3 = (uint)*(byte *)(param_1 + 9);
    }
  }
  return 0;
}


