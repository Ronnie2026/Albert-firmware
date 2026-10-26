/* Firmware entry: 0x4814a0ec */

void FUN_ram_4814a0ec(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
LAB_ram_4814a17a:
    FUN_ram_4814268a(&LAB_ram_4814a198,0);
    DAT_ram_4ff6e230 = 0;
    return;
  }
  bVar1 = false;
  piVar3 = DAT_ram_4ff6e1ac;
  do {
    piVar2 = (int *)piVar3[0x34];
joined_r0x4814a10e:
    if (piVar2 != (int *)0x0) {
      do {
        sVar4 = *(short *)((int)piVar2 + 0x1a) + -1;
        if (*(short *)((int)piVar2 + 0x1a) != 0) {
          *(short *)((int)piVar2 + 0x1a) = sVar4;
          if (sVar4 != 0) goto code_r0x4814a132;
          if (*(char *)((int)piVar2 + 0x19) == '\x01') {
            FUN_ram_481499d0(piVar3,piVar2,0x83);
            *(undefined1 *)((int)piVar2 + 0x19) = 2;
          }
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) break;
      } while( true );
    }
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) {
      if (bVar1) {
        FUN_ram_48142636(100,&LAB_ram_4814a198,0);
        return;
      }
      goto LAB_ram_4814a17a;
    }
  } while( true );
code_r0x4814a132:
  piVar2 = (int *)*piVar2;
  bVar1 = true;
  goto joined_r0x4814a10e;
}


