/* Firmware entry: 0x4808f132 */

bool FUN_ram_4808f132(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != 0) {
    fence();
    fence();
    if ((((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0'))
       && ((param_2 < 0x63001 && (param_4 <= 0x63000 - param_2)))) {
      iVar1 = FUN_ram_48025b94();
      fence();
      fence();
      if ((DAT_ram_4ff6def0 == 0) ||
         ((1000000 < (uint)(iVar1 - DAT_ram_4ff6deec) ||
          (2000000 < (uint)(iVar1 - DAT_ram_4ff6def0))))) {
        fence();
        DAT_ram_4ff6def0 = iVar1;
      }
      DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
      iVar2 = FUN_ram_4812e4d6(*param_1,param_2,param_3,param_4);
      DAT_ram_4ff6deec = FUN_ram_48025b94();
      fence();
      DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
      DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
      if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar1)) {
        DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar1;
      }
      return iVar2 == 0;
    }
  }
  return false;
}


