/* Firmware entry: 0x48146b40 */

void FUN_ram_48146b40(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int **)(param_1 + 0xcc) == (int *)0x0) {
    return;
  }
  piVar2 = (int *)**(int **)(param_1 + 0xcc);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    while ((*(char *)((int)piVar2 + 9) != '\x02' &&
           ((*(char *)((int)piVar2 + 9) != '\x01' ||
            ((ushort)(*(short *)((int)piVar2 + 10) - 1U) < 5))))) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    uVar3 = FUN_ram_4ff2d260();
    cVar1 = DAT_ram_4ff6e219;
    uVar5 = ((uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar3 / 5;
    sVar4 = (short)uVar3 - (short)uVar5;
    if (uVar3 == uVar5) {
      sVar4 = 1;
    }
    *(short *)((int)piVar2 + 10) = sVar4;
    if (cVar1 == '\0') {
      FUN_ram_48142636(100,&LAB_ram_4814704e,0);
      DAT_ram_4ff6e219 = '\x01';
      *(undefined1 *)((int)piVar2 + 9) = 1;
    }
    else {
      *(undefined1 *)((int)piVar2 + 9) = 1;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}


