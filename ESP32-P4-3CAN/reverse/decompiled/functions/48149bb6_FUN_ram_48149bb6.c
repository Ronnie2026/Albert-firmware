/* Firmware entry: 0x48149bb6 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_48149bb6(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar5 = *(int **)(param_1 + 0xd0);
  do {
    while( true ) {
      if (piVar5 == (int *)0x0) {
        return;
      }
      uVar2 = FUN_ram_4ff2d260();
      cVar1 = DAT_ram_4ff6e230;
      uVar4 = ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar2 / 5;
      uVar3 = uVar2 - uVar4;
      if (uVar2 == uVar4) {
        uVar3 = 1;
      }
      if (*(char *)((int)piVar5 + 0x19) == '\x02') break;
      if (*(char *)((int)piVar5 + 0x19) == '\x01') {
        if (*(ushort *)((int)piVar5 + 0x1a) == 0) break;
        if ((uint)*(ushort *)((int)piVar5 + 0x1a) <= (uVar3 & 0xffff)) goto LAB_ram_48149bec;
        *(short *)((int)piVar5 + 0x1a) = (short)uVar3;
        *(undefined1 *)((int)piVar5 + 0x19) = 1;
        goto joined_r0x48149c2a;
      }
LAB_ram_48149bec:
      piVar5 = (int *)*piVar5;
    }
    *(short *)((int)piVar5 + 0x1a) = (short)uVar3;
    *(undefined1 *)((int)piVar5 + 0x19) = 1;
joined_r0x48149c2a:
    if (cVar1 != '\0') goto LAB_ram_48149bec;
    FUN_ram_48142636(100,&LAB_ram_4814a198,0);
    piVar5 = (int *)*piVar5;
    DAT_ram_4ff6e230 = '\x01';
  } while( true );
}


