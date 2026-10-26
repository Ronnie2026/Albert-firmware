/* Firmware entry: 0x481958a0 */

undefined4 * FUN_ram_481958a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e2d8 == '\0') {
    puVar1 = (undefined4 *)&DAT_ram_4ff6e2dc;
  }
  else {
    puVar1 = (undefined4 *)FUN_ram_48006872(DAT_ram_4ff6e2d4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4ff2070c(8);
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto LAB_ram_481958d6;
      do {
        puVar2 = (undefined4 *)FUN_ram_48195958();
LAB_ram_481958d6:
        iVar3 = FUN_ram_480068a2(DAT_ram_4ff6e2d4,puVar2);
      } while (iVar3 != 0);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  return puVar1;
}


