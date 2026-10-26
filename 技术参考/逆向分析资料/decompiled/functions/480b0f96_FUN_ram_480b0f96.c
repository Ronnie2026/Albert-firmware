/* Firmware entry: 0x480b0f96 */

int FUN_ram_480b0f96(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_58;
  char acStack_54 [4];
  char acStack_50 [4];
  char acStack_4c [4];
  char acStack_48 [4];
  int iStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_480b063e();
  iVar1 = DAT_ram_4ff6dcdc;
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (uint)*(ushort *)(DAT_ram_4ff6dcdc + 0x22530);
  if (uVar2 == 0) {
    uVar2 = (uint)*(byte *)(DAT_ram_4ff6dcdc + 0x22532);
    iVar7 = 0;
    if (uVar2 == 0) goto LAB_ram_480b1140;
LAB_ram_480b1092:
    uVar8 = 0;
    iVar6 = iVar1 + 0x30;
    do {
      while( true ) {
        iVar4 = iVar1 + uVar8 * 0x40;
        if ((*(int *)(iVar4 + 0x22040) == param_2) && (*(int *)(iVar4 + 0x22044) == param_3)) break;
LAB_ram_480b10ea:
        uVar5 = uVar2 - 1 & 0xff;
        *(char *)(iVar1 + 0x22532) = (char)(uVar2 - 1);
        if (uVar8 != uVar5) {
          FUN_ram_4ff45158((uVar8 + 0x880) * 0x40 + iVar6,(uVar5 + 0x880) * 0x40 + iVar6,0x3c);
          uVar5 = (uint)*(byte *)(iVar1 + 0x22532);
        }
        memset((void *)((uVar5 + 0x880) * 0x40 + iVar6),0,0x3c);
        uVar2 = (uint)*(byte *)(iVar1 + 0x22532);
        iVar7 = iVar3;
        if (uVar2 <= uVar8) goto LAB_ram_480b113c;
      }
      iVar4 = FUN_ram_4ff4511a(uVar8 * 0x40 + 0x22030 + iVar1,param_1,0xc);
      if (iVar4 != 0) goto LAB_ram_480b10ea;
      uVar2 = (uint)*(byte *)(iVar1 + 0x22532);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar2);
  }
  else {
    uVar8 = 0;
    iVar6 = DAT_ram_4ff6dcdc + 0x30;
    iVar7 = 0;
    do {
      while( true ) {
        iVar4 = iVar1 + uVar8 * 0x88;
        if ((*(int *)(iVar4 + 0x40) == param_2) && (*(int *)(iVar4 + 0x44) == param_3)) break;
LAB_ram_480b1036:
        uVar5 = uVar2 - 1 & 0xffff;
        *(short *)(iVar1 + 0x22530) = (short)((uVar2 - 1) * 0x10000 >> 0x10);
        if (uVar8 != uVar5) {
          FUN_ram_4ff45158(uVar8 * 0x88 + iVar6,uVar5 * 0x88 + iVar6,0x85);
          uVar5 = (uint)*(ushort *)(iVar1 + 0x22530);
        }
        memset((void *)(uVar5 * 0x88 + iVar6),0,0x85);
        uVar2 = (uint)*(ushort *)(iVar1 + 0x22530);
        iVar7 = iVar3;
        if (uVar2 <= uVar8) goto LAB_ram_480b108a;
      }
      iVar4 = FUN_ram_4ff4511a(uVar8 * 0x88 + 0x30 + iVar1,param_1,0xc);
      if (iVar4 != 0) goto LAB_ram_480b1036;
      uVar2 = (uint)*(ushort *)(iVar1 + 0x22530);
      uVar8 = uVar8 + 1 & 0xffff;
    } while (uVar8 < uVar2);
LAB_ram_480b108a:
    uVar2 = (uint)*(byte *)(iVar1 + 0x22532);
    if (uVar2 != 0) goto LAB_ram_480b1092;
  }
LAB_ram_480b113c:
  if (iVar7 == 0) {
LAB_ram_480b1140:
    *(undefined1 *)(iVar1 + 0x41112) = 0;
    return iVar3;
  }
  iVar6 = FUN_ram_480b063e();
  iVar7 = DAT_ram_4ff6dcdc;
  if (iVar6 != 0) {
    iVar4 = DAT_ram_4ff6dcdc + 0x22c68;
    uStack_58 = 0;
    iVar6 = FUN_ram_4807aaf8(DAT_ram_4ff6dcdc + 0x30,iVar4,0x1e479,&uStack_58);
    if (iVar6 == 0) {
      *(undefined1 *)(iVar7 + 0x41111) = 0;
      *(char **)(iVar7 + 0x41114) = "outbox_encode_failed";
    }
    else {
      acStack_54[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0];
      acStack_54[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[1];
      acStack_54[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[2];
      acStack_54[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[3];
      acStack_50[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[4];
      acStack_50[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[5];
      acStack_50[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[6];
      acStack_50[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[7];
      acStack_4c[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[8];
      acStack_4c[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[9];
      acStack_4c[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[10];
      acStack_4c[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xb];
      acStack_48[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xc];
      acStack_48[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xd];
      acStack_48[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xe];
      acStack_48[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xf];
      iStack_44 = *(int *)(iVar7 + 0x20) + 1;
      if (iStack_44 == 0) {
        iStack_44 = 1;
      }
      iVar6 = FUN_ram_480b0938(iVar7 + 8,acStack_54,iVar4,uStack_58);
      if (iVar6 != 0) {
        *(undefined1 **)(iVar7 + 0x41114) = &DAT_ram_481df390;
        goto LAB_ram_480b1140;
      }
      *(undefined1 *)(iVar7 + 0x41111) = 0;
      *(char **)(iVar7 + 0x41114) = "outbox_write_failed";
    }
  }
  return 0;
}


