/* Firmware entry: 0x4814cd98 */

void * FUN_ram_4814cd98(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5)

{
  undefined **ppuVar1;
  void *__s;
  int iVar2;
  undefined2 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_4 != 0) && (__s = (void *)FUN_ram_48139540(&DAT_ram_482370b8), __s != (void *)0x0)) {
    memset(__s,0,0x12cc);
    *(undefined1 *)((int)__s + 8) = 10;
    *(undefined1 *)((int)__s + 10) = 3;
    *(undefined4 *)((int)__s + 4) = 0x5020a06;
    *(undefined4 *)((int)__s + 0x1c) = param_1;
    iVar2 = FUN_ram_48139af8(param_1,&DAT_ram_48236f9c,&DAT_ram_48236f84,&DAT_ram_48236f9c,__s,
                             &LAB_ram_4814cafa,0);
    if (iVar2 != 0) {
      ppuVar1 = &PTR_DAT_ram_482376a0_ram_482370a8;
      FUN_ram_48139d84(*(undefined4 *)((int)__s + 0x1c));
      *(undefined4 *)((int)__s + 0xc) = param_2;
      *(undefined4 *)((int)__s + 0x10) = param_3;
      *(int *)((int)__s + 0x14) = param_4;
      *(undefined4 *)((int)__s + 0x18) = param_5;
      puVar3 = &DAT_ram_482376a0;
      do {
        ppuVar1 = ppuVar1 + 1;
        (**(code **)(puVar3 + 2))(__s);
        puVar3 = (undefined2 *)*ppuVar1;
      } while (puVar3 != (undefined2 *)0x0);
      *(undefined1 *)((int)__s + 0x20) = 0;
      return __s;
    }
    FUN_ram_4813958a(&DAT_ram_482370b8,__s);
  }
  return (void *)0x0;
}


