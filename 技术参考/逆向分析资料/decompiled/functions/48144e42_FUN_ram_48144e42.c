/* Firmware entry: 0x48144e42 */

undefined4 FUN_ram_48144e42(int param_1)

{
  void *__s;
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffff0;
  }
  if ((*(byte *)(param_1 + 0xe7) & 1) == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffff0;
  }
  __s = *(void **)(param_1 + 0xc4);
  if (0x23f < *(ushort *)(param_1 + 0xdc)) {
    if (__s == (void *)0x0) {
      __s = (void *)FUN_ram_48139392(0x70);
      if (__s == (void *)0x0) {
        return 0xffffffff;
      }
      *(void **)(param_1 + 0xc4) = __s;
    }
    else if (*(char *)((int)__s + 4) != '\0') {
      FUN_ram_48143afc();
    }
    memset(__s,0,0x70);
    FUN_ram_4814eace(param_1,(int)__s + 0x58,FUN_ram_4814496a);
    iVar1 = FUN_ram_4814398a();
    if (iVar1 == 0) {
      *(undefined1 *)((int)__s + 4) = 1;
      if ((*(byte *)(param_1 + 0xe7) & 4) != 0) {
        if (*(char *)((int)__s + 8) != '\0') {
          FUN_ram_4814268a(&LAB_ram_481457a2,param_1);
          *(undefined1 *)((int)__s + 8) = 0;
        }
        FUN_ram_48143d6a(param_1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      if (*(char *)((int)__s + 5) != '\x02') {
        *(undefined1 *)((int)__s + 5) = 2;
        *(undefined1 *)((int)__s + 6) = 0;
        *(undefined4 *)((int)__s + 0xc) = 0;
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


