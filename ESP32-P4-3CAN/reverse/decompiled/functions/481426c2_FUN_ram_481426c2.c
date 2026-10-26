/* Firmware entry: 0x481426c2 */

void FUN_ram_481426c2(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = thunk_FUN_ram_4ff3c5d4();
  while ((piVar1 = DAT_ram_4ff6e204, DAT_ram_4ff6e204 != (int *)0x0 &&
         (-1 < iVar3 - DAT_ram_4ff6e204[1]))) {
    pcVar2 = (code *)DAT_ram_4ff6e204[2];
    uVar4 = DAT_ram_4ff6e204[3];
    DAT_ram_4ff6e200 = DAT_ram_4ff6e204[1];
    DAT_ram_4ff6e204 = (int *)*DAT_ram_4ff6e204;
    FUN_ram_48139604(0xc,piVar1);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
  }
  return;
}


