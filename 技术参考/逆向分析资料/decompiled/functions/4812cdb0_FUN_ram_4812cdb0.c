/* Firmware entry: 0x4812cdb0 */

void FUN_ram_4812cdb0(int param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_4ff45080(1,0x34);
  if (piVar1 != (int *)0x0) {
    piVar1[0xb] = (int)DAT_ram_4ff6e09c;
    if (DAT_ram_4ff6e09c != (int *)0x0) {
      DAT_ram_4ff6e09c[0xc] = (int)(piVar1 + 0xb);
    }
    DAT_ram_4ff6e098 = DAT_ram_4ff6e098 + 1;
    DAT_ram_4ff6e09c = piVar1;
    piVar1[0xc] = (int)&DAT_ram_4ff6e09c;
    piVar1[1] = param_1;
    piVar1[2] = param_1;
    *(undefined1 *)(piVar1 + 3) = 0;
    *piVar1 = DAT_ram_4ff6e098;
  }
  return;
}


