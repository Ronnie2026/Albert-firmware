/* Firmware entry: 0x480363c4 */

undefined8
FUN_ram_480363c4(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = param_4 & 0xff;
  if (uVar8 == 0) {
    return CONCAT44(param_5,param_4);
  }
  uVar2 = 0;
  if (param_3 != 0) {
    iVar7 = 0;
    uVar3 = 0;
    do {
      uVar9 = *param_2;
      DAT_ram_4ff6dd64 = FUN_ram_48159fd2(&DAT_ram_481c3efc,param_1,0,&uStack_48);
      if (DAT_ram_4ff6dd64 == 0x1102) {
        DAT_ram_4ff6dd64 = 0;
        uVar4 = uVar3;
      }
      else {
        uVar4 = uVar8;
        if (DAT_ram_4ff6dd64 == 0) {
          FUN_ram_4815a050(CONCAT22(uStack_46,CONCAT11(uStack_47,uStack_48)));
          DAT_ram_4ff6dd64 = FUN_ram_48159fd2(&DAT_ram_481c3efc,param_1,1,&uStack_48);
          if (DAT_ram_4ff6dd64 == 0) {
            iVar5 = FUN_ram_48025b94();
            fence();
            fence();
            if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar5 - DAT_ram_4ff6deec))) ||
               (2000000 < (uint)(iVar5 - DAT_ram_4ff6def0))) {
              fence();
              DAT_ram_4ff6def0 = iVar5;
            }
            DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
            DAT_ram_4ff6dd64 =
                 FUN_ram_4815a0b6(CONCAT22(uStack_46,CONCAT11(uStack_47,uStack_48)),uVar9);
            if (DAT_ram_4ff6dd64 == 0x1102) {
              DAT_ram_4ff6dd64 = 0;
LAB_ram_480365ae:
              DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(CONCAT22(uStack_46,CONCAT11(uStack_47,uStack_48)))
              ;
            }
            else if (DAT_ram_4ff6dd64 == 0) goto LAB_ram_480365ae;
            FUN_ram_4815a050(CONCAT22(uStack_46,CONCAT11(uStack_47,uStack_48)));
            iVar1 = DAT_ram_4ff6dd64;
            DAT_ram_4ff6deec = FUN_ram_48025b94();
            fence();
            DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
            DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
            if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar5)) {
              DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar5;
            }
            uVar4 = uVar3 | iVar1 != 0;
          }
        }
      }
      uVar2 = (undefined1)uVar4;
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 1;
      uVar3 = uVar4;
    } while (param_3 != iVar7);
    if (uVar4 != 0) {
      pcVar6 = "legacy_cleanup";
      goto LAB_ram_48036558;
    }
  }
  pcVar6 = "";
LAB_ram_48036558:
  return CONCAT44(pcVar6,CONCAT22(uStack_46,CONCAT11(uVar2,1)));
}


