/* Firmware entry: 0x4ff3a142 */

int FUN_ram_4ff3a142(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_24[0] = 0;
  if ((param_1 == (int *)0x0) && (param_2 == (uint *)0x0)) {
    iVar1 = 0x102;
  }
  else {
    iVar1 = FUN_ram_4812e1d6(1,3,0);
    if (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x10) < 4) {
        uVar3 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Too_small_core_dump_p_ram_4ff55ca4,uVar3,
                   s_esp_core_dump_flash_ram_4ff58544);
      }
      else {
        iVar2 = FUN_ram_4812e734(iVar1,0,auStack_24,4);
        if (iVar2 != 0) {
          uVar3 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s__Failed_to_read_core_d_ram_4ff55d44,uVar3,
                     s_esp_core_dump_flash_ram_4ff58544,iVar2);
          return iVar2;
        }
        if (auStack_24[0] != 0xffffffff) {
          if ((3 < auStack_24[0]) && (auStack_24[0] <= *(uint *)(iVar1 + 0x10))) {
            if (param_1 != (int *)0x0) {
              *param_1 = iVar1;
            }
            if (param_2 != (uint *)0x0) {
              *param_2 = auStack_24[0];
              return 0;
            }
            return 0;
          }
          uVar3 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s__Incorrect_size_of_co_ram_4ff55d7c,uVar3,
                     s_esp_core_dump_flash_ram_4ff58544,auStack_24[0]);
        }
      }
      return 0x104;
    }
    uVar3 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__No_core_dump_partiti_ram_4ff55c78,uVar3,
               s_esp_core_dump_flash_ram_4ff58544);
    iVar1 = 0x105;
  }
  return iVar1;
}


