/* Firmware entry: 0x481a7b04 */

void FUN_ram_481a7b04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebb2();
  iVar1 = FUN_ram_4ff3d9a8();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("idf_additions.c",0x9f,"vTaskDeleteWithCaps",
                     "xCurrentTaskHandle != ((void *)0)");
  }
  if ((param_1 != 0) && (param_1 != iVar1)) {
    FUN_ram_481a7972();
    return;
  }
  uVar2 = FUN_ram_4ff3c3f4(param_1);
  iVar1 = FUN_ram_4ff3e458(&LAB_ram_481a7a54,"prvTaskDeleteWithCapsTask",0x600,iVar1,uVar2,0,mhartid
                          );
  if (iVar1 != 0) {
    FUN_ram_4ff3ceca(param_1);
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"freertos_additions",
                     "E (%lu) %s: %s: Failed to suspend the task to be deleted\n",uVar2,
                     "freertos_additions","vTaskDeleteWithCaps");
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"freertos_additions",
                   "E (%lu) %s: %s: Failed to create the task to delete the current task\n",uVar2,
                   "freertos_additions","vTaskDeleteWithCaps");
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


