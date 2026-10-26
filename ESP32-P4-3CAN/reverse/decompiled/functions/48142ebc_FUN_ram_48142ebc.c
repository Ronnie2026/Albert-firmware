/* Firmware entry: 0x48142ebc */

int FUN_ram_48142ebc(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5,
                    int param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 == 0) {
    return -0x10;
  }
  if (param_3 == (uint *)0x0) {
    return -0x10;
  }
  if (param_6 == 0) {
    return -0x10;
  }
  if (param_5 == 0) {
    return -0x10;
  }
  if ((*(char *)(param_1 + 0x14) != '.') &&
     ((*(char *)(param_6 + 0x14) != *(char *)(param_1 + 0x14) ||
      ((char)param_3[5] != *(char *)(param_6 + 0x14))))) {
    return -6;
  }
  if ((*(short *)(param_1 + 0x3a) == 0) && (iVar4 = FUN_ram_48142c4a(param_1,param_1,0), iVar4 != 0)
     ) {
    return iVar4;
  }
  if (0xfff7 < *(ushort *)(param_2 + 8)) {
    return -1;
  }
  iVar3 = FUN_ram_4813aab0(param_2,8);
  iVar4 = param_2;
  if (iVar3 != 0) {
    iVar4 = FUN_ram_4813ad9a(0x36,8,0x280);
    if (iVar4 == 0) {
      return -1;
    }
    if (*(short *)(param_2 + 8) != 0) {
      FUN_ram_4813b17c(iVar4,param_2);
    }
  }
  if (*(ushort *)(iVar4 + 10) < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/udp.c",0x319,"udp_sendto_if_src",
                     "check that first pbuf can hold struct udp_hdr");
  }
  puVar5 = *(undefined1 **)(iVar4 + 4);
  uVar2 = FUN_ram_48137fc8(*(undefined2 *)(param_1 + 0x3a));
  *puVar5 = (char)uVar2;
  puVar5[1] = (char)((ushort)uVar2 >> 8);
  uVar2 = FUN_ram_48137fc8(param_4);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[2] = (char)uVar2;
  puVar5[3] = (char)((ushort)uVar2 >> 8);
  if ((*(byte *)(param_1 + 0x38) & 8) != 0) {
    if ((char)param_3[5] == '\x06') {
      if ((*param_3 & 0xff) == 0xff) goto LAB_ram_48142f8a;
    }
    else if ((*param_3 & 0xf0) == 0xe0) {
LAB_ram_48142f8a:
      *(byte *)(iVar4 + 0xd) = *(byte *)(iVar4 + 0xd) | 4;
    }
  }
  uVar2 = FUN_ram_48137fc8(*(undefined2 *)(iVar4 + 8));
  puVar5[5] = (char)((ushort)uVar2 >> 8);
  puVar5[4] = (char)uVar2;
  if (((char)param_3[5] == '\x06') || ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    iVar3 = FUN_ram_48151a52(iVar4,0x11,*(undefined2 *)(iVar4 + 8),param_6,param_3);
    if (iVar3 == 0) {
      iVar3 = 0xffff;
    }
    puVar5[7] = (char)((uint)iVar3 >> 8);
    puVar5[6] = (char)iVar3;
    if ((char)param_3[5] == '\x06') {
      if ((char)*param_3 == -1) {
        uVar1 = *(undefined1 *)(param_1 + 0x45);
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x33);
      }
      iVar3 = FUN_ram_48148cbc(iVar4,param_6,param_3,uVar1,*(undefined1 *)(param_1 + 0x32),0x11,
                               param_5);
      goto LAB_ram_4814300c;
    }
  }
  if ((*param_3 & 0xf0) == 0xe0) {
    uVar1 = *(undefined1 *)(param_1 + 0x45);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x33);
  }
  iVar3 = FUN_ram_48147760(iVar4,param_6,param_3,uVar1,*(undefined1 *)(param_1 + 0x32),0x11,param_5)
  ;
LAB_ram_4814300c:
  if (iVar4 != param_2) {
    FUN_ram_4813ac74(iVar4);
  }
  return iVar3;
}


