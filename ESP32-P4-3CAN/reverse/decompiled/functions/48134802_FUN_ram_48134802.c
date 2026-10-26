/* Firmware entry: 0x48134802 */

void FUN_ram_48134802(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint *param_5
                     )

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x435,"lwip_sock_make_addr",
                     "from != NULL");
  }
  if (param_5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x436,"lwip_sock_make_addr",
                     "fromlen != NULL");
  }
  cVar1 = *(char *)(param_2 + 5);
  if (((*param_1 & 8) == 0) || (cVar1 != '\0')) {
    if ((cVar1 == '.') || (cVar1 == '\x06')) goto LAB_ram_48134840;
    uStack_2b = 2;
    uStack_2a = FUN_ram_48137fc8(param_3);
    uStack_28 = *param_2;
    uVar3 = *param_5;
    uVar5 = 0x10;
    uStack_24 = 0;
    uStack_20 = 0;
    uVar4 = 0x10;
    uVar2 = uVar5;
    if (uVar3 < 0x11) goto LAB_ram_48134872;
  }
  else {
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = *param_2;
    *param_2 = 0;
    param_2[2] = 0xffff0000;
    *(undefined1 *)(param_2 + 5) = 6;
LAB_ram_48134840:
    uStack_2b = 10;
    uStack_2a = FUN_ram_48137fc8(param_3);
    uStack_1c = param_2[2];
    uStack_14 = (uint)*(byte *)(param_2 + 4);
    uStack_24 = *param_2;
    uStack_20 = param_2[1];
    uStack_18 = param_2[3];
    uVar3 = *param_5;
    uStack_28 = 0;
    uVar4 = 0x1c;
    uVar5 = uVar4;
    uVar2 = 0x1c;
    if (uVar3 < 0x1d) goto LAB_ram_48134872;
  }
  uVar3 = uVar2;
  *param_5 = uVar3;
  uVar5 = uVar4;
LAB_ram_48134872:
  uStack_2c = (undefined1)uVar5;
  FUN_ram_4ff45158(param_4,&uStack_2c,uVar3);
  return;
}


