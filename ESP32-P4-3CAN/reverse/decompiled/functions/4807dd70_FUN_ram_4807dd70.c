/* Firmware entry: 0x4807dd70 */

uint FUN_ram_4807dd70(void *param_1)

{
  uint uVar1;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [200];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_e0,0,0xc0);
  uVar1 = (uint)DAT_ram_4ff6dd68;
  if (uVar1 != 0) {
    iStack_e8 = 0;
    DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_manage",0,&uStack_e4);
    if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_4807de4a:
      DAT_ram_4ff6dd64 = 0;
      memset(param_1,0,0x91);
      *(undefined1 *)((int)param_1 + 0x94) = 0;
      *(undefined1 *)((int)param_1 + 0x95) = 0;
      return uVar1;
    }
    if (DAT_ram_4ff6dd64 == 0) {
      iStack_e8 = 0xc0;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(uStack_e4,"policy1",auStack_e0,&iStack_e8);
      FUN_ram_4815a050(uStack_e4);
      if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_4807de4a;
      if (((DAT_ram_4ff6dd64 == 0) && (iStack_e8 == 0xc0)) &&
         (uVar1 = FUN_ram_4807db28(auStack_e0,0xc0,param_1), uVar1 != 0)) {
        *(undefined1 *)((int)param_1 + 0x94) = *(undefined1 *)((int)param_1 + 4);
        *(undefined1 *)((int)param_1 + 0x95) = 0;
        return uVar1;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x94) = 1;
  *(undefined1 *)((int)param_1 + 0x95) = 1;
  return 0;
}


