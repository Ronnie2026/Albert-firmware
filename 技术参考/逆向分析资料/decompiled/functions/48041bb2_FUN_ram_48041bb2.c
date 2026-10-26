/* Firmware entry: 0x48041bb2 */

char FUN_ram_48041bb2(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 auStack_60 [72];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,param_1,1,0);
  if ((iVar2 != 0) || (iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,param_1,0,0), iVar2 != 0)) {
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    FUN_ram_4819ad74(&uStack_6c,10,"a%08lx",param_2);
    iVar2 = FUN_ram_48122930(&DAT_ram_4ff6dec8,&uStack_6c);
    cVar1 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_6c);
    if (iVar2 == 0) {
      FUN_ram_48122142(&DAT_ram_4ff6dec8);
      return cVar1 << 1;
    }
    if (iVar2 == param_3) {
      memset(auStack_60,0,0x3e);
      iVar2 = FUN_ram_481229e0(&DAT_ram_4ff6dec8,&uStack_6c,auStack_60,param_3);
      FUN_ram_48122142(&DAT_ram_4ff6dec8);
      if (param_3 == iVar2) {
        cVar1 = FUN_ram_480417d2(auStack_60,param_3,param_4);
        return '\x02' - cVar1;
      }
    }
    else {
      FUN_ram_48122142(&DAT_ram_4ff6dec8);
    }
  }
  return '\x02';
}


