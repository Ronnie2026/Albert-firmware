/* Firmware entry: 0x4806593c */

char FUN_ram_4806593c(ushort *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  ushort uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)((int)param_1 + 0x15);
  if ((cVar1 != '\0') && (((char)param_1[0xb] == '\0' || (*(int *)(param_1 + 0xc) != 0)))) {
    if ((char)param_1[10] != '\0') {
      return (char)param_1[10];
    }
    if (*(int *)(param_1 + 0x26) == 0) {
      puVar4 = (undefined4 *)FUN_ram_4ff206d8(0x3a80,0x404);
      if (puVar4 == (undefined4 *)0x0) {
        return '\0';
      }
      *puVar4 = &PTR_FUN_ram_48070394_ram_481f5300;
      puVar4[7] = puVar4 + 3;
      puVar4[3] = &PTR_LAB_ram_4802c238_ram_481f52e4;
      puVar4[9] = &LAB_ram_4802e2ec;
      puVar4[10] = &LAB_ram_4802e302;
      puVar4[4] = 0xffffffff;
      puVar4[1] = param_1;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      puVar4[6] = 0;
      puVar4[8] = puVar4;
      memset(puVar4 + 0xb,0,0x400);
      *(undefined1 *)(puVar4 + 0x110) = 7;
      puVar4[0x11d] = 0xffffffff;
      puVar4[0x10b] = 0;
      puVar4[0x10c] = 0;
      puVar4[0x10d] = 0;
      puVar4[0x10e] = 0;
      puVar4[0x10f] = 0;
      puVar4[0x111] = 0;
      *(undefined1 *)(puVar4 + 0x112) = 0;
      *(undefined2 *)(puVar4 + 0x113) = 0;
      puVar4[0x114] = 0;
      puVar4[0x115] = 0;
      puVar4[0x116] = 0;
      puVar4[0x117] = 0;
      puVar4[0x118] = 0;
      puVar4[0x119] = 0;
      puVar4[0x11a] = 0;
      puVar4[0x11b] = 0;
      puVar4[0x11c] = 0;
      puVar4[0x11e] = 0;
      puVar4[0x11f] = 0;
      puVar4[0x120] = 0;
      puVar4[0x121] = 0;
      puVar4[0x122] = 0;
      *(undefined2 *)(puVar4 + 0x123) = 0;
      puVar4[0x124] = 0;
      puVar4[0x125] = 0;
      memset(puVar4 + 0x126,0,0x400);
      puVar4[0x226] = 0;
      puVar4[0x227] = 0;
      puVar4[0x228] = 0;
      puVar4[0x229] = 0;
      puVar4[0x22a] = 0;
      puVar4[0x22b] = 0;
      puVar4[0x22c] = 0;
      puVar4[0x22d] = 0;
      puVar4[0x22e] = 0;
      memset(puVar4 + 0x22f,0,0x400);
      puVar4[0x32f] = 0;
      *(undefined2 *)(puVar4 + 0x330) = 0;
      *(undefined1 *)((int)puVar4 + 0xcc2) = 0;
      memset(puVar4 + 0x331,0,0x1000);
      puVar4[0x731] = 0;
      puVar4[0x732] = 0;
      FUN_ram_4802a8a8(puVar4 + 0x733,&DAT_ram_481df390);
      puVar4[0x74c] = 0;
      puVar4[0x74e] = 0;
      puVar4[0x750] = &PTR_FUN_ram_48070394_ram_481f5300;
      puVar4[0x74d] = 0;
      puVar4[0x74f] = 0;
      puVar4[0x753] = &PTR_LAB_ram_4802c238_ram_481f52e4;
      puVar4[0x754] = 0xffffffff;
      puVar4[0x759] = &LAB_ram_4802e2ec;
      puVar4[0x75a] = &LAB_ram_4802e302;
      puVar4[0x752] = 1;
      puVar4[0x737] = 0;
      puVar4[0x738] = 0;
      puVar4[0x739] = 0;
      puVar4[0x73a] = 0;
      puVar4[0x73b] = 0;
      puVar4[0x73c] = 0;
      *(undefined1 *)(puVar4 + 0x73d) = 0;
      puVar4[0x73e] = 0;
      puVar4[0x740] = 0;
      puVar4[0x741] = 0;
      puVar4[0x742] = 0;
      puVar4[0x743] = 0;
      puVar4[0x744] = 0;
      puVar4[0x745] = 0;
      puVar4[0x746] = 0;
      puVar4[0x747] = 0;
      puVar4[0x748] = 0;
      puVar4[0x749] = 0;
      puVar4[0x74a] = 0;
      puVar4[0x751] = param_1;
      *(undefined1 *)(puVar4 + 0x755) = 0;
      puVar4[0x756] = 0;
      puVar4[0x758] = puVar4 + 0x750;
      puVar4[0x757] = puVar4 + 0x753;
      memset(puVar4 + 0x75b,0,0x400);
      *(undefined1 *)(puVar4 + 0x860) = 7;
      puVar4[0x86d] = 0xffffffff;
      puVar4[0x85b] = 0;
      puVar4[0x85c] = 0;
      puVar4[0x85d] = 0;
      puVar4[0x85e] = 0;
      puVar4[0x85f] = 0;
      puVar4[0x861] = 0;
      *(undefined1 *)(puVar4 + 0x862) = 0;
      *(undefined2 *)(puVar4 + 0x863) = 0;
      puVar4[0x864] = 0;
      puVar4[0x865] = 0;
      puVar4[0x866] = 0;
      puVar4[0x867] = 0;
      puVar4[0x868] = 0;
      puVar4[0x869] = 0;
      puVar4[0x86a] = 0;
      puVar4[0x86b] = 0;
      puVar4[0x86c] = 0;
      puVar4[0x86e] = 0;
      puVar4[0x86f] = 0;
      puVar4[0x870] = 0;
      puVar4[0x871] = 0;
      puVar4[0x872] = 0;
      *(undefined2 *)(puVar4 + 0x873) = 0;
      puVar4[0x874] = 0;
      puVar4[0x875] = 0;
      memset(puVar4 + 0x876,0,0x400);
      puVar4[0x976] = 0;
      puVar4[0x977] = 0;
      puVar4[0x978] = 0;
      puVar4[0x979] = 0;
      puVar4[0x97a] = 0;
      puVar4[0x97b] = 0;
      puVar4[0x97c] = 0;
      puVar4[0x97d] = 0;
      puVar4[0x97e] = 0;
      memset(puVar4 + 0x97f,0,0x400);
      puVar4[0xa7f] = 0;
      *(undefined2 *)(puVar4 + 0xa80) = 0;
      *(undefined1 *)((int)puVar4 + 0x2a02) = 0;
      memset(puVar4 + 0xa81,0,0x1000);
      puVar4[0xe81] = 0;
      puVar4[0xe82] = 0;
      FUN_ram_4802a8a8(puVar4 + 0xe83,&DAT_ram_481df390);
      puVar4[0xe87] = 0;
      puVar4[0xe88] = 0;
      puVar4[0xe89] = 0;
      puVar4[0xe8a] = 0;
      puVar4[0xe8b] = 0;
      puVar4[0xe8c] = 0;
      *(undefined1 *)(puVar4 + 0xe8d) = 0;
      puVar4[0xe8e] = 0;
      puVar4[0xe90] = 0;
      puVar4[0xe91] = 0;
      puVar4[0xe92] = 0;
      puVar4[0xe93] = 0;
      puVar4[0xe94] = 0;
      puVar4[0xe95] = 0;
      puVar4[0xe96] = 0;
      puVar4[0xe97] = 0;
      puVar4[0xe98] = 0;
      puVar4[0xe99] = 0;
      puVar4[0xe9a] = 0;
      puVar4[0xe9c] = 0;
      puVar4[0xe9d] = 0;
      puVar4[0xe9e] = 0;
      puVar4[0xe9f] = 0;
      *(undefined4 **)(param_1 + 0x26) = puVar4;
    }
    FUN_ram_48065718(param_1 + 2);
    if (*(int *)(param_1 + 4) < 0) {
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      FUN_ram_48064bd0(&DAT_ram_4ff5ce9c,&uStack_58);
      uVar6 = FUN_ram_4ff21a0a();
      DAT_ram_4ff5cea8 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      DAT_ram_4ff5cea0 = 1;
      DAT_ram_4ff5cea4 = 2;
      DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 30000;
      DAT_ram_4ff5ceb4 = 0;
      DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
      DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
      iVar2 = FUN_ram_48136a1a(2,1,6);
      cVar5 = '\0';
      if (-1 < iVar2) {
        *(int *)(param_1 + 4) = iVar2;
        uStack_7c = 1;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_6c = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        _uStack_68 = CONCAT22(*param_1 >> 8 | *param_1 << 8,0x200);
        uStack_70 = 1000;
        iVar3 = FUN_ram_481372bc(iVar2,0xfff,0x1005,&uStack_78,0x10);
        if ((((iVar3 < 0) || (iVar3 = FUN_ram_481372bc(iVar2,0xfff,4,&uStack_7c), iVar3 < 0)) ||
            (iVar3 = FUN_ram_4813746c(iVar2,4,0x4000), iVar3 < 0)) ||
           ((iVar3 = FUN_ram_48136200(iVar2,&uStack_68,0x10), iVar3 < 0 ||
            (iVar2 = FUN_ram_481365d0(iVar2,2), iVar2 < 0)))) {
          FUN_ram_48064fb4(param_1 + 2);
        }
        else {
          *(undefined1 *)(param_1 + 10) = 1;
          cVar5 = cVar1;
        }
      }
      FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_58);
      return cVar5;
    }
  }
  return '\0';
}


