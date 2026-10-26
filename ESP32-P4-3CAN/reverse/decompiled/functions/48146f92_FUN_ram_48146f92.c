/* Firmware entry: 0x48146f92 */

void FUN_ram_48146f92(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
LAB_ram_48147030:
    FUN_ram_4814268a(&LAB_ram_4814704e,0);
    DAT_ram_4ff6e219 = 0;
    return;
  }
  bVar1 = false;
  piVar3 = DAT_ram_4ff6e1ac;
  do {
    piVar2 = (int *)piVar3[0x33];
joined_r0x48146fba:
    if (piVar2 != (int *)0x0) {
      do {
        sVar4 = *(short *)((int)piVar2 + 10) + -1;
        if (*(short *)((int)piVar2 + 10) != 0) {
          *(short *)((int)piVar2 + 10) = sVar4;
          if (sVar4 == 0) {
            if ((*(char *)((int)piVar2 + 9) == '\x01') && (piVar2[1] != DAT_ram_4ff6e220))
            goto code_r0x48146ff0;
          }
          else {
            bVar1 = true;
          }
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) break;
      } while( true );
    }
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) {
      if (bVar1) {
        FUN_ram_48142636(100,&LAB_ram_4814704e,0);
        return;
      }
      goto LAB_ram_48147030;
    }
  } while( true );
code_r0x48146ff0:
  *(undefined1 *)((int)piVar2 + 9) = 2;
  FUN_ram_48146902(piVar3,piVar2,0x16);
  piVar2 = (int *)*piVar2;
  goto joined_r0x48146fba;
}


