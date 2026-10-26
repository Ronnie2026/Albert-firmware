/* Firmware entry: 0x48195404 */

void FUN_ram_48195404(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4800668e();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_48195562(4);
    *puVar2 = &PTR_FUN_ram_481953a8_ram_4823ae80;
                    /* WARNING: Subroutine does not return */
    FUN_ram_48195eec(puVar2,&PTR_PTR_ram_4823ae58,FUN_ram_481953a8);
  }
  return;
}


