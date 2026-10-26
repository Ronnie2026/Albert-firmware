/* Firmware entry: 0x4809841a */

undefined4 FUN_ram_4809841a(int param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar12 = 0x88c;
    iVar9 = 0x18;
    iVar7 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar9 = 0x3590;
    iVar12 = 0x3e04;
    iVar7 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return 0;
    }
    iVar9 = 0x6b08;
    iVar12 = 0x737c;
    iVar7 = 2;
  }
  FUN_ram_4ff3ec14(iVar12 + param_1,0xffffffff);
  FUN_ram_480982aa(param_1 + iVar9);
  iVar3 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar9 = 0;
  iVar13 = 0;
  cVar6 = '\0';
  iVar4 = param_1 + iVar7 * 0x3578;
  uVar5 = *(undefined4 *)(iVar4 + 0x2ec8);
  *param_3 = *(undefined1 *)(iVar4 + 0x2ec0);
  piVar8 = (int *)(iVar7 * 0x3578 + 0x2f24 + param_1);
  param_3[1] = *(undefined1 *)(iVar4 + 0x2ec1);
  param_3[2] = *(undefined1 *)(iVar4 + 0x2ec2);
  param_3[3] = *(undefined1 *)(iVar4 + 0x2ec3);
  param_3[4] = *(undefined1 *)(iVar4 + 0x2ec4);
  uVar1 = *(undefined1 *)(iVar4 + 0x2ec5);
  *(undefined4 *)(param_3 + 8) = uVar5;
  uVar5 = *(undefined4 *)(iVar4 + 0x2ecc);
  param_3[5] = uVar1;
  *(undefined4 *)(param_3 + 0xc) = uVar5;
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(iVar4 + 0x2ed0);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar4 + 0x2ed4);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar4 + 0x2ed8);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar4 + 0x2edc);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar4 + 12000);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar4 + 0x2ee4);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar4 + 0x2ee8);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(iVar4 + 0x2eec);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(iVar4 + 0x2ef0);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(iVar4 + 0x2ef4);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(iVar4 + 0x2ef8);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(iVar4 + 0x2efc);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(iVar4 + 0x2f00);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(iVar4 + 0x2f04);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(iVar4 + 0x2f08);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(iVar4 + 0x2f0c);
  do {
    iVar11 = iVar11 + piVar8[5];
    cVar6 = cVar6 + '\x01';
    iVar13 = iVar13 + piVar8[3] + piVar8[5] + piVar8[6] + piVar8[7];
    iVar9 = iVar9 + *piVar8 + piVar8[1] + piVar8[2] + piVar8[4];
    iVar10 = iVar10 + piVar8[8];
    iVar3 = iVar3 + piVar8[0xb];
    piVar8 = piVar8 + 0x10;
  } while (cVar6 != '\x03');
  *(int *)(param_3 + 0x50) = iVar13;
  *(int *)(param_3 + 0x54) = iVar9;
  *(int *)(param_3 + 0x58) = iVar11;
  *(int *)(param_3 + 0x5c) = iVar10;
  *(int *)(param_3 + 0x60) = iVar3;
  iVar7 = param_1 + iVar7 * 0x3578;
  *(undefined4 *)(param_3 + 100) = *(undefined4 *)(iVar7 + 0x2f10);
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(iVar7 + 0x2f14);
  *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(iVar7 + 0x2f18);
  *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(iVar7 + 0x2fdc);
  *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(iVar7 + 0x2fe0);
  *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(iVar7 + 0x2fe4);
  *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)(iVar7 + 0x2fe8);
  *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(iVar7 + 0x2fec);
  *(undefined4 *)(param_3 + 0x84) = *(undefined4 *)(iVar7 + 0x2ff0);
  *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(iVar7 + 0x2ff4);
  *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(iVar7 + 0x2ff8);
  *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(iVar7 + 0x2ffc);
  *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(iVar7 + 0x3000);
  *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(iVar7 + 0x3010);
  *(undefined4 *)(param_3 + 0x9c) = *(undefined4 *)(iVar7 + 0x3014);
  *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(iVar7 + 0x3018);
  *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(iVar7 + 0x301c);
  *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(iVar7 + 0x3020);
  *(undefined4 *)(param_3 + 0xac) = *(undefined4 *)(iVar7 + 0x3024);
  *(undefined4 *)(param_3 + 0xb0) = *(undefined4 *)(iVar7 + 0x3028);
  *(undefined4 *)(param_3 + 0xb4) = *(undefined4 *)(iVar7 + 0x302c);
  *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(iVar7 + 0x3030);
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(iVar7 + 0x3034);
  *(undefined4 *)(param_3 + 0xc0) = *(undefined4 *)(iVar7 + 0x3058);
  *(undefined4 *)(param_3 + 0xc4) = *(undefined4 *)(iVar7 + 0x3048);
  *(undefined4 *)(param_3 + 200) = *(undefined4 *)(iVar7 + 0x304c);
  *(undefined4 *)(param_3 + 0xcc) = *(undefined4 *)(iVar7 + 0x3050);
  *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(iVar7 + 0x3054);
  *(undefined4 *)(param_3 + 0xd4) = *(undefined4 *)(iVar7 + 0x305c);
  *(undefined4 *)(param_3 + 0xd8) = *(undefined4 *)(iVar7 + 0x3060);
  uVar2 = *(undefined2 *)(iVar7 + 0x30a0);
  uVar1 = *(undefined1 *)(iVar7 + 0x30a5);
  *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(iVar7 + 0x3064);
  *(undefined4 *)(param_3 + 0xe0) = *(undefined4 *)(iVar7 + 0x3068);
  *(undefined4 *)(param_3 + 0xe4) = *(undefined4 *)(iVar7 + 0x306c);
  *(undefined4 *)(param_3 + 0xe8) = *(undefined4 *)(iVar7 + 0x307c);
  *(undefined4 *)(param_3 + 0xec) = *(undefined4 *)(iVar7 + 0x3080);
  *(undefined4 *)(param_3 + 0xf0) = *(undefined4 *)(iVar7 + 0x3084);
  *(undefined4 *)(param_3 + 0xf4) = *(undefined4 *)(iVar7 + 0x3088);
  *(undefined4 *)(param_3 + 0xf8) = *(undefined4 *)(iVar7 + 0x308c);
  *(undefined4 *)(param_3 + 0xfc) = *(undefined4 *)(iVar7 + 0x3090);
  *(undefined4 *)(param_3 + 0x100) = *(undefined4 *)(iVar7 + 0x3094);
  *(undefined4 *)(param_3 + 0x104) = *(undefined4 *)(iVar7 + 0x3098);
  uVar5 = *(undefined4 *)(iVar7 + 0x309c);
  *(undefined2 *)(param_3 + 0x10c) = uVar2;
  uVar2 = *(undefined2 *)(iVar7 + 0x30a2);
  param_3[0x110] = uVar1;
  uVar1 = *(undefined1 *)(iVar7 + 0x30a6);
  *(undefined2 *)(param_3 + 0x10e) = uVar2;
  *(undefined4 *)(param_3 + 0x108) = uVar5;
  param_3[0x111] = uVar1;
  uVar5 = *(undefined4 *)(iVar7 + 0x30b0);
  *(undefined2 *)(param_3 + 0x112) = *(undefined2 *)(iVar7 + 0x30a8);
  *(undefined2 *)(param_3 + 0x114) = *(undefined2 *)(iVar7 + 0x30aa);
  *(undefined2 *)(param_3 + 0x116) = *(undefined2 *)(iVar7 + 0x30ac);
  uVar2 = *(undefined2 *)(iVar7 + 0x30ae);
  *(undefined4 *)(param_3 + 0x11c) = uVar5;
  uVar5 = *(undefined4 *)(iVar7 + 0x30b4);
  *(undefined2 *)(param_3 + 0x118) = uVar2;
  *(undefined4 *)(param_3 + 0x120) = uVar5;
  *(undefined4 *)(param_3 + 0x124) = *(undefined4 *)(iVar7 + 0x30b8);
  *(undefined4 *)(param_3 + 0x128) = *(undefined4 *)(iVar7 + 0x30bc);
  *(undefined4 *)(param_3 + 300) = *(undefined4 *)(iVar7 + 0x30c8);
  *(undefined4 *)(param_3 + 0x130) = *(undefined4 *)(iVar7 + 0x30cc);
  FUN_ram_4ff3ee10(iVar12 + param_1);
  return 1;
}


