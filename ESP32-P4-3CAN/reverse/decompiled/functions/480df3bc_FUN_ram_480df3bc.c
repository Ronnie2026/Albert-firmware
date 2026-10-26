/* Firmware entry: 0x480df3bc */

void FUN_ram_480df3bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_104 [9];
  char cStack_fb;
  char cStack_bd;
  char cStack_8c;
  char cStack_89;
  char cStack_2c;
  char cStack_2b;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0xd3d) == param_2) {
    FUN_ram_480df148(param_1,0);
  }
  if (param_2 == 2) {
    uVar1 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(param_1 + 0x378,0xffffffff);
    if (*(char *)(param_1 + 0x390) == '\x01') {
      *(undefined1 *)(param_1 + 0x3af) = 0;
      *(undefined1 *)(param_1 + 0x39d) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      *(undefined1 *)(param_1 + 0x396) = 0;
      *(undefined4 *)(param_1 + 0x380) = uVar1;
      *(undefined2 *)(param_1 + 0x390) = 0x203;
    }
    if (*(char *)(param_1 + 0x3b3) == '\x01') {
      *(undefined1 *)(param_1 + 0x3af) = 0;
      *(undefined1 *)(param_1 + 0x3b3) = 3;
      *(undefined1 *)(param_1 + 0x3b4) = 2;
    }
    FUN_ram_4ff3ee10(param_1 + 0x378);
    uVar1 = FUN_ram_48025ba6();
    iVar3 = param_1 + 0x574;
    FUN_ram_48053f2a(auStack_104,iVar3,uVar1);
    if ((((cStack_fb != '\0') || (cStack_89 != '\0')) || (cStack_8c != '\0')) ||
       (((cStack_bd != '\0' || (cStack_2b != '\0')) || (cStack_2c != '\0')))) {
      iVar2 = FUN_ram_48025ba6();
      FUN_ram_4ff3ec14(iVar3,0xffffffff);
      if (*(char *)(param_1 + 0x620) == '\0') {
        *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
      }
      *(undefined1 *)(param_1 + 0x5c2) = 8;
      *(undefined4 *)(param_1 + 0x5c4) = 0;
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      *(undefined1 *)(param_1 + 0x634) = 0;
      *(undefined1 *)(param_1 + 0x5d1) = 0;
      *(undefined4 *)(param_1 + 0x5d4) = 0;
      *(undefined1 *)(param_1 + 0x5d3) = 0;
      *(undefined1 *)(param_1 + 0x5e0) = 0;
      *(undefined2 *)(param_1 + 0x628) = 0;
      *(undefined1 *)(param_1 + 0x62a) = 0;
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined2 *)(param_1 + 0x630) = 0;
      *(undefined1 *)(param_1 + 0x636) = 0;
      *(undefined2 *)(param_1 + 0x648) = 0;
      *(undefined2 *)(param_1 + 0x608) = 0;
      *(undefined4 *)(param_1 + 0x5bc) = 0;
      *(undefined2 *)(param_1 + 0x5c0) = 0;
      *(undefined1 *)(param_1 + 0x620) = 1;
      FUN_ram_4ff3ee10(iVar3);
      FUN_ram_4ff3ec14(iVar3,0xffffffff);
      *(undefined1 *)(param_1 + 0x6cb) = 0;
      *(undefined1 *)(param_1 + 0x6c8) = 0;
      *(undefined1 *)(param_1 + 0x6ce) = 0;
      *(undefined1 *)(param_1 + 0x6bc) = 6;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x6c0) = iVar2;
      FUN_ram_4ff3ee10(iVar3);
      return;
    }
  }
  return;
}


